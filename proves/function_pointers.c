#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Number of pointers that can has an array */
#define MAXLINES 25

/* Pototype functions */
int get_lines(char *lines[]);
void sort(char *p[], int n, int sort_type);
int alpha(char *p1[], char *p2[]);
int reverse(char *p1[], char *p2[]);
void print_lines(char *p[], int n);

/* Array to save the lines  */
char *lines[MAXLINES];

int main(){
    int number_of_lines = 0, sort_type = 0;

    /* Read the lines from the keyboard */
    number_of_lines = get_lines(lines);

    if(number_of_lines < 0){
        puts("Memory allocation error.");
        exit(-1);
    }

    puts("0. Reverse sort.\n1. Alphabetical sort.");
    scanf("%d", &sort_type);

    /* Sort the lines  and then show the result */
    sort(lines, number_of_lines, sort_type);
    print_lines(lines, number_of_lines);
    return 0;
}

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


//===============================================================================================
void sort(char *p[], int n, int sort_type){
    int a = 1, b = 0;
    char *x;

    /* The function pointer */
    int (*compare)(char **p1, char **p2);

    /* Ading the main value to the pointer for point ot the funtion */
    /* of the adecuated comparation, it depends of the sort_type argument */
    compare = sort_type ? reverse : alpha;

    for(; a < n; a++){
        for(b = 0; b < n-1; b++){
            if(compare(p[b], p[b+1]) > 0){
                x = p[b];
                p[b] = p[b+1];
                p[b+1] = x;
            }
        }
    }
}

void print_lines(char *p[], int n){
    int count = 0;
    while(count < n){
        printf("\n%s ", p[count]);
        count++;
    }
}

int alpha(char *p1[], char *p2[]){
    return strcmp(p2[0], p1[0]);
}

int reverse(char *p1[], char *p2[]){
    return strcmp(p1[0], p2[0]);
}
//=================================================================================================================