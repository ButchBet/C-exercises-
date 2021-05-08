#include <stdio.h>

int main(){
  int x=0, y=0, n=0, i=0;
  printf("Enter the first, second number  and number of terms to evaluate: "); scanf("%i %i %i", &x, &y, &n); printf("\n");
  // printf("%i\n%i\n", x, y);
  while(i<=n-1){
    y=x;
    x+=y-1;
    printf("%i\n", x);
    i++;
  }
  
}
