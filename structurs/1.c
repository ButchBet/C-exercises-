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

    
    // requiring the data for the users
    int i = 0;
    
    while(i < 2){
        printf("\n\nEnter id: ");
        scanf("%li", &people[i].id );
        fflush(stdin); // Use this built-in function to can clear the buffer
        printf("\nEnter first name: ");
        gets(people[i].name);
        printf("\nEnter last name: ");
        gets(people[i].last_name);
        printf("\nEnter the email: ");
        gets(people[i].email);
        printf("\nEnter blood type b_type: ");
        gets(people[i].b_type);
        i++;
    }

    i = 0;

    // Showing the information
    while(i < 2){
        printf("\n");
        printf("\n");
        printf("%li\n", people[i].id );
        puts(people[i].name);
        puts(people[i].last_name);
        puts(people[i].email);
        puts(people[i].b_type);
        i++;
    }
}