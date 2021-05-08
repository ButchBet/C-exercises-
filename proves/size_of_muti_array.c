#include <stdio.h>

int multi[2][4];

int main(){
    printf("The toal size is: %d\n", sizeof(multi));
    printf("The si<e of the first row is: %d\n", sizeof(multi[0]));
    printf("The size of the first elements is: %d", sizeof(multi[0][0]));
    return 0;
}