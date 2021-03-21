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
    
    char s[n];
    
    for(int i=0; i<n; i++){
        printf("-->"); scanf("%c", &s[i]); printf("\n");
    }
    
    const int s_width = strlen(s);
    const int field_width = (total_width - s_width) / 2 + s_width;
    printf("%i",field_width);
    
    for(int i=0; i<n; i++){
        printf("%c", s[i]);
    } 
    
    return 0;
}//main