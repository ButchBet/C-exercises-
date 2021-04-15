#include <stdio.h>

/*
#ifdef _WIN64
#include <conio.h>
#else
#define clrscr() 
#endif
*/

void main(void){
    struct regist
    {
        char *id;
        char *full_name;
        char *l_name;
        char *email;
        char *b_type;
    }people[5];

    // reading the data
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the Id: "); scanf("%s", people[i].id);
        printf("\nEnter the full name: "); scanf("%s", people[i].full_name);
        printf("\nEnter the email: "); scanf("%s", people[i].email);
        printf("\nEnter the blood type: "); scanf("%s", people[i].b_type);
        printf("\n\n");
    }
    //clrscr();
    printf("\e[1;1H\e[2J");
    // showing the data
    for (int i = 0; i < 5; i++)
    {
        printf("Id: ", people[i].id);
        printf("\nName: "); puts(people[i].full_name);
        printf("\nEmail: ", people[i].email);
        printf("\nBlood type: ", people[i].b_type);
        printf("\n\n");
    }
}