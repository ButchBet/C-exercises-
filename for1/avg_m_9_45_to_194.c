#include <stdio.h>

int main(void){
  int add=0, n=0, avg=0;
  for(int i=47; i <= 194; i++){
    if(i%9 == 0){
      printf("%i.\n", i);
      add += i;
      n++;
    }else{}
  }
  avg = add/n;
  printf("The average of all of the 9 multiples is: %i.", avg);
  printf("\n"); // to avoid the % final sing, for any reason it apears
                // when add \n in the last output
}
