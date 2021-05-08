#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* I'd like using ASCII reference to the operator but it's not good idea to use 42 to 47 because the operands are not consecuented. 
 
 I better use a rand number from 1 to 5 where
 1=+
 2=-
 3=*
 4=/
 5=% */

int main(void){
  int num1=0, num2=0, sign=0, result=0, hit=0;
  srand(time(0)); /* to set the starting point for producing a series of
 pseudo-random integers. If srand() isn't called the rand() seed is set as
 if srand(1) were called at program start. In resume the program always is
 going to return the same set of values if you dont set the seed. */

  for(int i=0; i<5; i++){
    num1 = rand()% 100 + 1;
    num2 = rand()% 100 + 1;
    result = rand()% 1000 + 1;
    sign = rand()% 5 + 1;

    switch(sign){
    case 1:
      if(result == num1 + num2){
	hit++;
      }printf("%i + %i: %i. \n", num1, num2, result);
      break;
    case 2:
      if(result == num1 - num2){
	hit++;
      }printf("%i - %i: %i. \n", num1, num2, result);
      break;
    case 3:
      if(result == num1 * num2){
	hit++;
      }printf("%i * %i: %i. \n", num1, num2, result);
      break;
    case 4:
      if(num1 >= num2){
	if(result == num1 / num2){
	  hit++;
	}printf("%i / %i: %i. \n", num1, num2, result);
      }else{
	if(result == num2 / num1){
	  hit++;
	}printf("%i / %i: %i. \n", num2, num1, result);
      }
      break;
    case 5:
      if(num1 >= num2){
	if(result == num1 % num2){
	  hit++;
	}printf("%i %c %i: %i. \n", num1, 37, num2, result);
      }else{
	if(result == num2 % num1){
	  hit++;
	}printf("%i %c %i: %i. \n", num2, 37, num1, result);
      }
      break;
    }
  }
  printf("The number of hits is: %i.\n", hit);
}
