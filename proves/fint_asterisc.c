#include <stdio.h>

int main(){
    char asterisc[31];
    _Bool prove = 1;

    /* Ge that string */
    puts("Enter the string");
    gets(asterisc); 

    /* Find if there are asteriscs */
    for(int i = 0; i < 31; i++){
        if(asterisc[i] == '*'){
            for(int j = 0; j < i; j++){
                printf("%c", asterisc[j]);
            }
            prove = 0;
            break;
        }
    }

    if(prove == 1){
        puts(asterisc);
    }
    return 0;
}