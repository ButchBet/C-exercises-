#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXLINES 25

int get_lines(char *lines[]);
void sort(char *p[], int n);
void print_strings(char *p[], int n);

char *lines[MAXLINES];

int main(){
	int number_of_lines;

	/* Read the lines from the keyboard */
	number_of_lines = get_lines(lines);

	/* This means that the array has allocaded correct */
	if(number_of_lines < 0){
		puts("Memory allocation error");
		exit(-1);
	}

	/* Sort that string  comparing the firt letter bettween each one */
	sort(lines, number_of_lines);
	print_strings(lines, number_of_lines);
}


/* Function to read, allocate and storage a string line inside a pointer array index */
int get_lines(char *lines[]){
	int n = 0;
	char buffer[80]; /* Temporall storage of the lines */
	
	puts("Enter one line at time; enter a blank when done");

	while(n < MAXLINES){
		scanf("%s", &buffer);

		/* Can stop the loop in case that entered a null character */
		if(buffer[0] == '0'){
			break;
		}

		lines[n] = (char *)malloc(strlen(buffer)+1);
		if(lines[n] == NULL){
			return -1;
		}
		
		strcpy(lines[n], buffer);
		n++;
	}
	return n;
}


/* Function to  sort the entered string */
void sort(char *p[], int n){
	int a,b;
	char *x;
	for(a = 1; a < n; a++){
		for(b = 0; b < n-1; b++){
			if(strcmp(p[b], p[b+1]) > 0){
				x = p[b];
				p[b] = p[b+1];
				p[b+1] = x;
			}
		}
	}
}


/* Function to print the sorted lines */
void print_strings(char *p[], int n){
	int count;

	printf("\nFrom here\n");
	for(count = 0; count < n; count++){
		printf("%s\n", p[count]);
	}
}
   