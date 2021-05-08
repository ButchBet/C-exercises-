#include <stdio.h>

int main(){
    unsigned char public_key[13] = {"ABCDEFGHIJKLM"};
    unsigned char private_key[13] ={"NOPQRSTUVWXYZ"};
    unsigned char reading[100];
    // Reading the statement
    gets(reading);
    // Changing the values
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 13; j++){
            unsigned char upper_lower1 = ((int)public_key[j])+32;
            unsigned char upper_lower2 = ((int)private_key[j]+32);
            if(reading[i] == public_key[j]){
                reading[i] = private_key[j];
            }else if(reading[i] == private_key[j]){
                reading[i] = public_key[j];
            }else if(reading[i] == upper_lower1){
                reading[i] = upper_lower2;
            }else if(reading[i] == upper_lower2){
                reading[i] == upper_lower1;
            }else{}
        }
    }
    puts(reading);
}