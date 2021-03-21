#include <stdio.h>

int main(void){
  int ax=0, ay=0;
  int bx=0, by=0;

  printf("Enter the up-left dot cordenate: "); scanf("%i %i", &ax, &ay);
  printf("\n");

  printf("Enter the bottom-rigth dot cordenate: "); scanf("%i %i", &bx, &by);
  printf("\n");

  printf("Y\n");
  for(int i=0; i<bx; i++){
    printf("*");
  }printf("\n");

  for(int i=0; i<ay; i++){
    printf("*");
    for(int j=0; j<bx-2; j++){
      printf(" ");
    }
    printf("*\n");
  }

  for(int i=0; i<bx; i++){
    printf("*");
  }printf(" X\n");
}
