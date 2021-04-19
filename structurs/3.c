#include <stdio.h>
#include <stdlib.h>

void main(void){
    struct regist{
        long int  id;
        char name[12];
        char last_name[30];
        char email[100];
        char b_type[3];
    }people[2];

    struct regist *p_regist;
    p_regist = people;
    
    // requiring the data for the users
    int i = 0;
    
    while(i < 2){
        printf("\n\nEnter id: ");
        scanf("%li", &p_regist->id );
        fflush(stdin); // Use this built-in function to can clear the buffer
        printf("\nEnter first name: ");
        gets(p_regist->name);
        printf("\nEnter last name: ");
        gets(p_regist->last_name);
        printf("\nEnter the email: ");
        gets(p_regist->email);
        printf("\nEnter blood type b_type: ");
        gets(p_regist->b_type);
        p_regist++;
        i++;
    }
    p_regist -= 2;

    i = 0;

    // Showing the information
    while(i < 2){
        printf("\n");
        printf("\n");
        printf("%li\n", p_regist->id );
        puts(p_regist->name);
        puts(p_regist->last_name);
        puts(p_regist->email);
        puts(p_regist->b_type);
        p_regist++;
        i++;
    }
}