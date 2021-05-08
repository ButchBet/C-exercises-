#include <stdio.h>

void main(){
    struct data{
        int integer;
        float float1;
        float float2;
    }info;

    info.integer = 100;
    printf("%d\n", info.integer);

    struct data *ptr_data = &info;
    printf("%d\n", ptr_data->integer);

    //ptr_data->float1 = 5.5; 
    (*ptr_data).float1 = 5.5;
    printf("%.1f\n", ptr_data->float1);  
}