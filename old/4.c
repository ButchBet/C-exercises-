#include <stdio.h> // input-output library
#include <stdbool.h> // boolean values using

int main() {
    bool myBoolean;
    int myInteger;
    float myReal;
    char mycharacter[2] = "c";
    char myString[7] = "Answer";
    
    // inicialization of the variables
    myBoolean = true;
    myInteger = 2;
    myReal = 0.0;
//    *mycharacter[] 
//    *myString[]
    
    printf("My variable's values: \n");
    printf("Boolean variable: %i \n", myBoolean);
    printf("Integer variable: %i \n", myInteger);
    printf("Real variable: %.1f \n", myReal);
    printf("character variable: %s \n", mycharacter);
    printf("String variable: %s \n", myString);
    
    return 0;
}