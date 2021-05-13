#include <stdio.h>
#include <stdlib.h>

void f1(void);
void f2(void);
void f3(void);

int main(void){
	atexit(f3);
	atexit(f2);
	atexit(f1);
	while(1){
		int option = 0;
		printf("Enter a number bettwen 1 and 10, to exit enter 0: "); scanf("%i", &option);
		if(option < 0 || option > 10){
			system("cls");
			printf("Please enter a valid number.\n");
			continue;
		}

		switch(option){
			case 0: system("cls"); exit(0); break;
			default: system("cls"); printf("Great, you have choosen a valid number.\n"); 
		}
	}
}

void f1(void){
	printf("This is the first atexit() call.\n");
}

void f2(void){
	printf("This is the second atexit() call.\n");
}

void f3(void){
	printf("This is the third atexit() call.\n");
}
