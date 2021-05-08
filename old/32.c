#include <stdio.h>
#include <math.h>
/* num = readed number
   comp = at the beginin is num but when begin the count digit loop
   becomes at chan
   i = while counter
   chan = change of the value (num=1234, chan=num/10 .... i==n)
   add = the addition of the pair digits
   n = number of digits (it's 1 because the first digits/10 is 0.something 
*/

int main(){
  int num=0,i=0,comp=0, chan=0, add=0, n=1;
  printf("Enter an integer number: "); scanf("%i", &num); printf("\n");
  comp=num;
  // loop to count the number or digits that has a number
  while(i==0){
    chan=comp/10;
    comp=chan;
    if(chan!=0){
      n++;
    }else{
      i++; // means that the loop is just testing the first digit
    }
  }

  // cheking pair and adding it
  while(i<=n){
    chan=num%(int)pow(10,i)/(int)pow(10, i-1);
    if(chan%2==0){
      add+=chan;
      i++;
    }else{
      i++;
    }
  }
  printf("%i", add);

  return 0;
}
