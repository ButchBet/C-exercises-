#include <stdio.h>
#define MAX 5

void main(void);
int reading_arrays(int x[], int y[]);
void add_arrays(int x[], int y[], int z[]);
void show_addition(int *z);

void main(void){
  int first_array[MAX];
  int second_array[MAX];
  int third_array[MAX];

  // read the values
  reading_arrays(first_array, second_array);
  // addtion of arrays
  //int *p_third = add_arrays(first_array, second_array, third_array);
  add_arrays(first_array, second_array, third_array);
  int *p_third = third_array;
  // showing addition
  show_addition(p_third);
}

int reading_arrays(int x[], int y[]){
  int count = 0;
  while(count < MAX){
    printf("Value %i to the first and second array ", count+1);
    scanf("%i %i", (int *)(x + count), (int *)(y + count));
    //scanf("%i %i", &x[count], &y[count]);
    count++;
  }
}

void add_arrays(int x[], int y[], int z[]){
  int count = -1;
  do{
    count++;
    *(z + count) = *(x + count) + *(y + count);
    //z[count] = x[count] + y[count];
  }while(count < MAX);
}

void show_addition(int *z){
  int count = 0;
  while(count < MAX){
    //printf("%i.\n", *(z + count));
    //printf("%i = %i.\n",count, z[count]);
    printf("%d.\n", *z++);
    count++;
  }
}
