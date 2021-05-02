#include <stdio.h>
#include <stdlib.h>

void clear_up(void);

void main(void){
    int age = 0;
    char name[20];

    /* Read the age */
    printf("Enter your age--> "); scanf("%d", &age); printf("\n");

    /* Call clear_up or use fflush() built in function to get tha additional character entered in the age variable in case */
    /*clear_up();*/
    fflush(stdin);
    /* Read the name */
    printf("Enter your full name--> "); gets(name);

    /* Show the age and name */
    printf("Hello %s, I know you are %d years old.\n", name, age);
}

/*void clear_up(void){
    char jank[80];
    gets(jank);
}*/