#include <stdio.h>

int main(void){
  int x=1, y=1, m=0, i=1, n=0;
  int const c=2;
  printf("Enter the limit value: "); scanf("%i", &m); printf("\n");

  n = m;
  printf("%i %i ", x, y);
  m -= 2;
  if(m%c !=0){
    m = (m+1)/c; // we add 1 because need the iterations as an integer number
  }else{
    m /= c;
  }

  //--------------------------------------------------------------
  for(; i <= m; i++){
    x += y;
    y += x;

    if(m-i == 0 && n%2 != 0){ 
      printf("%i.", x);
    }else{
      printf("%i %i ", x, y);
    }
  }printf("\n");
}
