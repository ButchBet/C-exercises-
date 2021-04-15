#include <stdio.h>

void main(void){
    struct regist{
//        char usage[5][10] = {{"name"}, {"last name"}, {"id"}, {"email"}, {"blood type"}};
        char id[12];
        char name[12];
        char last_name[30];
        char email[100];
        char b_type[3];
    };

    struct users{
        struct regist people[5];
    } users_re;

    
    // requiring the data for the users
    int i = 0;
    
    while(i < 5){
        printf("\n\nEnter id: ");
        scanf("%s", users_re.people[i].id );
        printf("\nEnter first name: ");
        scanf("%s", users_re.people[i].name);
        printf("\nEnter last name: ");
        scanf("%s", users_re.people[i].last_name);
        printf("\nEnter the email: ");
        scanf("%s", users_re.people[i].email);
        printf("\nEnter blood type b_type: ");
        scanf("%s", users_re.people[i].b_type);
        i++;
    }

    i = 0;

    // Showing the information
    while(i < 5){
        printf("\n");
        printf("\n");
        puts(users_re.people[i].id );
        puts(users_re.people[i].name);
        puts(users_re.people[i].last_name);
        puts(users_re.people[i].email);
        puts(users_re.people[i].b_type);
        i++;
    }
}