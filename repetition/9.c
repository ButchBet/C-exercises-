#include <stdio.h>

int main(){
  float ini_amount=0, cost=0, remaining=0, month_fee=0, porcent=0;
  int fees=0, i=1;

  printf("Enter the car's cost and the initial amount: "); scanf("%f %f", &cost, &ini_amount); printf("\n");
 
  remaining = cost - ini_amount;
  
  if(ini_amount >= cost*0.20){
    printf("The remainder of the value to pay is: %f.\n", remaining);
    printf("By how many  deadlines would you like to pay the remainder?\n");
    printf("--> 12 months. \n--> 24 months. \n--> 36 months. \n");
    scanf("%i", &fees); printf("\n");

    month_fee = remaining/fees;
    porcent = 1+0.05*fees; /* 1=100/100 (100 porcent)
                              0.05=5/100 (5 porcent)
                              *fees=to can get the greater porcent that 
                                    can get an object in a determinated
                                    time (12 fees = 1.6) 
                         */   

    while(i <= fees){
      printf("Month %i: $%.1f.\n", i, month_fee*porcent);
      porcent -= 0.05;
      i++;
    }
  }else{
    printf("Not valid month quantity.\n");
  }

  return 0;
}
    
