#include <stdio.h>

/* At this program I'm using only int type because the remainder operand 
   is a binary operator that operates only on integer types (short, int,
   long and long long.

   We can use (integer tiype)float_varible but we'll be risking to lose data.
   Also can use library function like round but can lose data too */


int main(void){
  int n=0, num=0, greater=0, lower=0, lower_count=0;
  printf("Enter the quantity of numbers: "); scanf("%i", &n); printf("\n");
  
  for(int i=0; i < n; i++){
    scanf("%i", &num); printf("\n");

    if(num%5 == 0 && num >= greater){
      greater = num;
    }   
    else if(num%3 == 0){
      if(lower_count == 0){ /* We have to find he lower so it needs to know 
                               what's the reference dot, in this case is
                               the first number multiple of three */
        lower = num;
	lower_count++;
      }else if(num <= lower){
	lower = num;
      }else{} // --> to know where finish each number of conditions 
    }else{} // here too
  }

  printf("The greater 5's multiple is: %.i.\n", greater);
  printf("The lower 3's multiple is: %.i.\n", lower);
}
