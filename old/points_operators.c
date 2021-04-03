#include <stdio.h>

/* Learning to use point's operators x = (a++, b++);
   The left expresion is evaluated and after this the a is increased and b respectivelly. 
    
   If a = 1, b = 2 and x= 0. After the point's expesion we will have a = 2, b = 3 and x = 2;  
  
 */

int main(void){
  int x = 0, a = 2, b = 6;
  printf("x = %1d, a = %1d and b = %1d.\n", x, a, b);
  x = (a++, b++);
  printf("x = %1d, a = %1d and b = %1d.\n", x, a, b);
}
