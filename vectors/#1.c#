#include <stdio.h>
#define MAX 10

int main(){
  float vector[MAX] = {1,3,9,8,7,6,8,8,22,11};
  float vector_equal_lower[MAX];
  float *p_vector_e_l = vector_equal_lower;
  
  float vector_avg;

  for(int i=0; i < MAX; i++){
    vector_avg += vector[i];
  }vector_avg /= MAX;

  int i = 0;
  for(int j=0; j < MAX; j++){
    if(vector[j] <= vector_avg){
      *p_vector_e_l = vector[j];
      p_vector_e_l++;
      *p_vector_e_l = 0;
      i++;
    }else{
    }
  }
  printf("The vagerage is: %.1f.\n", vector_avg);
  printf("vector_equal_lower[%d] = {", MAX);

  int count = 0;
  do{
    printf("%.1f,", vector_equal_lower[count]);
    count++;
  }while(vector_equal_lower[count] != (float)0);
  printf("}.\n");
}
