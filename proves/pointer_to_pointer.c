#include <stdio.h>

void new_pointer(int**);

int main(){
    int x = 12;
    int *ptr = &x;
    int **ptr_to_ptr = &ptr;
    new_pointer(ptr_to_ptr);
    return 0;
}

void new_pointer(int **ptr){
    printf("The value form the variable is: %d", **ptr);
}