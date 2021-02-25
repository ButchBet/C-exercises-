#include <stdio.h>
int main() {
   int c = 5;
   int *p = &c;

   printf("%i", *p);  // 5
   return 0; 
}