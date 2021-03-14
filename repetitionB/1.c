#include <stdio.h>

int main(){
  int N=0, x=0;
  unsigned long long int p=1, add=0;
  printf("Enter the real number to evaluate: "); scanf("%i",&N); printf("\n");
  const int C = N;

  //  multiplaying loop
  while(N < 100){
    x = N;
    if(x%C == 0){
      printf("%i: ",x);
      x--; // to dont count the x (Ex= 3, then only check 2 and 1
      p = 1;
      while(x > 0){
	if(x%2 != 0){
	  p *= x;
	  x--;
	}else{
	  x--;
	}
      }
      add += p;
      printf("%llu\n",p);
      N++;
    }else{
      N++;
    }
  }
  printf("Addition: %lli.\n", add); // We will generate and overflow 
  return 0;
}
