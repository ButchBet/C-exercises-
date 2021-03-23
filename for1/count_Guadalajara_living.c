#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n=0, intchar=0, R=0, H=0, L=0, J=0, O=0, i=0;
  char charact=0;

  printf("Enter the number of students: "); scanf("%i", &n); printf("\n");

  for(;i<n*2;){ // n*2 because for any reason i is counting + 2
    printf("R) Reforma\nH) Hidalgo\nL) Libertad\nJ) Juarez\nO) Other cities\nWhere do you live? --> "); scanf("%c", &charact); printf("\n");

    printf("\e[1;1H\e[2J"); // faster mode to clear screen than system("csl") or clrsrc()
    intchar = charact;

    switch(intchar){
    case 72:
      H++;
      break;
    case 74:
      J++;
      break;
    case 76:
      L++;
      break;
    case 79:
      O++;
      break;
    case 82:
      R++;
      break;
    default:
      break;
    }
    i = i+1;
  }

  printf("The number of students that live in Reforma: %i, Hidalgo: %i, Libertad: %i, Juarez: %i, others: %i.\n",R, H, L, J, O);
}
