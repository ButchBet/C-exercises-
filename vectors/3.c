#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 5;
  float array1[5] = {1,3,7,8,5}, array2[5] = {2,8,7,9,32};
  int *p_hello_world = (int *)malloc((n*2)*sizeof(int)); // make sure that has the necessary memory space 
 
  if(p_hello_world == NULL){
      printf("Unsuccessful allocation.\n");
      exit(0);
  }else{
      // calculate and show the addition
      printf("*p_hello_world = {");
      for(int i = 0; i < n; i++){ 
          *p_hello_world = array1[i] + array2[i];
          if(i == n-1){
              printf("%i}.\n", *p_hello_world);
          }else{
              printf("%i, ", *p_hello_world);
          }
          p_hello_world++;
      }
  }
  return 0;
}


