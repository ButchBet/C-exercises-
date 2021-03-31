
#include <stdio.h>

/* Learn about the conditional operator  exp1 ? exp2: exp3;
   if exp1 is true or different to (0) then evaluate exp2, else
   then evaluate exp3 */

int main(void){
  int x = 1;
  int y = 3;
  int z = 4;

  z = (x > z)? x: y;
  printf("%1d. \n", z);
}
