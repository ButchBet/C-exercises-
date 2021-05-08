#include <stdio.h> // input output library

/// Program to read a 4 digits number and display it reversed

int main() {
  int num;
  printf("Enter a four digit number: "); scanf("%i", &num);

  if (num > 999 && num < 10000){
    printf("The number %i reversed is %i%i%i%i\n", num,num%10,num%100/10,num/100%10,num/1000);
  }
  else {
    printf("\nError.\n");
  }

  return 0;
}
