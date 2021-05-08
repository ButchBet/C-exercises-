#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  int n=0, m=0, i=1, add=0, pro=1;
  printf("Enter the n limit and m incognit: "); scanf("%i%i", &n, &m); printf("\n");
  
  while (i <= n){
    if(i%m == 0){
      add += i;
      pro *= i;
      printf("--> %i\n", i);
      i++;
    }else{
      i++;
      continue;
    }
  }printf("Addition: %i, product: %i.\n", add, pro);
  sleep(8);
  system("clear"); 
  main();
  return 0;
}
