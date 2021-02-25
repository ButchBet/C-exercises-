#include <stdio.h>
#include <stdlib.h>

int main(){
  int num=0, i=1, j=1, k=1;
  printf("Enter the number to evaluate: "); scanf("%i", &num); printf("\n");

  // product table
  while (i <= 10){
    printf("%i x %i: %i.\n", num, i, num*i);
    i++;
  }
  printf("\n");
  // div table
  i=1;
  while (i <= 10){
    printf("%i div %i: %i.\n", num, i, num/i);
    i++;
  }
  printf("\n");
  // mod table
  i=1;
  while (i <= 10){
    printf("%i mod %i: %i.\n", num, i, num%i);
    i++;
  }
  return 0;
}
