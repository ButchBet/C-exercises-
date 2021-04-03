#include <stdio.h>

void avoid(void);
float floating(float);
int integer(int);

int main(void){
  int x = 5;
  float y = 9.3;

  avoid();
  floating(y);
  integer(x);
}

void avoid(void){
  printf("You haven't done something.\n");
}

float floating(float y){
  printf("You have sent here this: %.1f.\n",y);
}

int integer(int x){
  printf("You have send here this: %d.\n", x);
}
