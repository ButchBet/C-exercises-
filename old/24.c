#include <stdio.h> // input-output library 
#include <string.h> // string library
#include <math.h> // math library

int main() {
  int n;
  short hour, min, s;
  char day[10];

  printf("Enter the seconds please: "); scanf("%d", &n);
  printf("\nEnter the week's day: "); scanf("%s", &day[0]);
  // value conversion from n to hour: min: s
  hour = n/3600;
  min = n/60%60;
  s = n%60;

  if (strcmp(day, "sunday") == 0 || strcmp(day, "saturday") == 0){
    printf("\nThe cost for hour: %d, min: %d, s: %d is: $%.1f. \n", hour, min, s,n*(float)2);
  }
  else if(strcmp(day, "monday") == 0 || strcmp(day, "tuesday") == 0 || strcmp(day, "wednesday") == 0 || strcmp(day, "thursday") == 0 || strcmp(day, "friday") == 0){
    printf("\nThe cost for hour: %.d, min: %.d, s: %.d is:$ %.1f. \n", hour, min, s, n*(float)3);
  }
  else {
    printf("\nError, please try again\n");
  }
  return 0;
}
