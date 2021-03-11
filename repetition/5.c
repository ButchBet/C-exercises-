#include <stdio.h>

int main(){
  int N=0,i=1;
  float n=0, n_a=0;

  printf("Enter the number of values to read: "); scanf("%i", &N); printf("\n");
  
  while(i<=N){
    printf("--> ");scanf("%f", &n);printf("\n");
    n_a += n;
    i++;
  }

  printf("The addtion of the values is: %.2f.\n",n_a);
  n_a /= N;
  printf("The average of the addtion is: %.2f.\n",n_a);

  return 0;
}
