
#include <stdio.h>

/*qu = quentity of values
  num = readed number
  p = positive
  n = negative
  z = zero
*/

int main(void){
  int qu=0, p=0, n=0, z=0, i=0;
  float num=0.0;
  int *pi;
  pi = &qu;
  printf("Enter the quantity of numbers to read: "); scanf("%i", pi);
  printf("\n");

  while(i < *pi){
    printf("-->"); scanf("%f", &num); printf("\n");
    if(num < 0){
      n++;
    }else if(num > 0){
      p++;
    }else{
      z++;
    }
    i++;
  }

  printf("Negative: %i. \n", n);
  printf("Prositive: %i. \n", p);
  printf("Zero: %i. \n", z);
}
