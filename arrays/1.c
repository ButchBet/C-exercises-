#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){   
    // Add unsigned to can use all of the Ascci characters, the signed only is until 128
    unsigned char public_key[11] = {"HelloWord!"};
    unsigned char private_key[11];

    srand(time(NULL)); /* search to understand better this*/
    /* fill the private array with random values */
    for(int i = 0; i < 10; i++){
        private_key[i] = ((rand()%(255-32))+32);
    }

    /* Change the values to the public_key for the addtion */
    for(int i = 0; i < 10; ++i)
    {
        int add = (int)(public_key[i] + private_key[i]);
        public_key[i] = (char)add;
    }

    // show the encryped key
    printf("Encryped--> ");
    puts(public_key);
        
    // Make user to choose id what to finish or decrypt
    printf("\n\n1. Decrypt the key\nOther. Finish\n--> ");
    int op;
    scanf("%i", &op);
    if(op == 1){
        system("cls");
        // loop to decrypt 
        for(int i = 0; i < 10; i++){
            int subs = public_key[i] - private_key[i];
            public_key[i] = subs;
        }
        printf("Decrypted--> ");
        puts(public_key);
    }else{
        system("cls");
        exit(1);
    }   
}