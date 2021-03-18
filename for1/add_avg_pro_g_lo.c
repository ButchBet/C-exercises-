#include <stdio.h>


int main(void){
  int n=0;
  float num=0.0, greater=0.0, lower=0.0, add=0.0, pro=1.0, avg=0.0;
  printf("Enter the auqntity of values: "); scanf("%i", &n); printf("\n");
  printf("--> "); scanf("%f", &num); printf("\n");

  add += num;
  pro *= num;
  lower = num;
  greater = num; // We take as base the fist entered number 

  for(int i = 0; i < n-1; i++){
    
    printf("--> "); scanf("%f", &num); printf("\n");

    if(greater >= num){
      if(lower < num){
      }else{
	lower = num;
     }else{
       greater = num;
    }
    add += num;
    pro *= num;
  }

  avg = add/(float)n;

  printf("Addtion: %.1f.\n", add);
  printf("Product: %.1f.\n", pro);
  printf("Average: %.1f.\n", avg);
  printf("Lower: %.1f.\n", lower);
  printf("Greater: %.1f.\n", greater);
  
}
