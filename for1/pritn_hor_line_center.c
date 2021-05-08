#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <Windows.h>
int GetColumnWidth()
{
    CONSOLE_SCREEN_BUFFER_INFO info;
    HANDLE out;
    
    if (!(out = GetStdHandle(STD_OUTPUT_HANDLE)) ||
        !GetConsoleScreenBufferInfo(out, &info))
        return 80;
    return info.dwSize.X;
}//GetColumnWidth
#else
int GetColumnWidth() {return 80;}
#endif

int main()
{
    int n=0;
    const int total_width = GetColumnWidth();
    
    printf("Enter the quantity of * to print --> "); scanf("%i", &n); printf("\n");
    
    const int field_width = (total_width-n)/2;
    
    for(int j=0; j<field_width; j++){
      printf(" ");
    }
    for(int i=0; i<n; i++){
        printf("*");
    }printf("\n");
    
    return 0;
}//main
