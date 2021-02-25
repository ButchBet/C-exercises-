#include <stdio.h>

int main() {
  int reference;
  printf("Enter the progream's reference: "); scanf("%i", &reference);

  printf("\n");

  if (reference == 123){
       printf("Turbo.C\n");
  }
   else if (reference  == 234){
       printf("Word.\n"); 
   }
   else if (reference == 345){
       printf("Power Point.\n");
   }
   else if (reference == 456){
       printf("Excel.\n");
   }
   else if (reference == 567){
       printf("Autocad.\n");
      
   }
   else if (reference == 678){
       printf("Matlab.\n");
   }
   else if (reference == 789){
       printf("Corel Draw.\n");
   }
   else if (reference == 890){
       printf("Other programs.\n");
   }
   else {
       printf("Error.\n");
   }
  return 0;
}
