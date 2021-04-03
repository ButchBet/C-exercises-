#include <stdio.h>

/* NOTE: this methos is not thought to se a 0 the begining to
the integer number*/

void become_into_vector(int n, int q, int m);

void main(){
  int num = 120456, module = 0, quotient = num, n = 0;

  while(quotient != 0){
    n++;
    quotient /= 10;
  }
  become_into_vector(n, num, module);
}

void become_into_vector(int n, int q, int m){
  int new_vector[n];
  int *p_n_v = new_vector; // &new_vector[0] == new_vector 
  p_n_v += n; // here we are moving to the last addess direction
  printf("Number: %d.\n", q);
  printf("The number of digits is: %d and the address for each element in the array is.\n", n);
  int x = n;
  
  /* show the address for each elements since the last to the firt and 
asign each number digit to the new array since the last*/
  for(int i=0; i<n; i++){
    printf("%d = %u.\n", x, (int)p_n_v);
    m = q%10;
    q /= 10;
    *p_n_v = m;
    x--;
    p_n_v--;
  }
  // Showing the each array's element
  printf("new_vector[%d] = {", n);
  p_n_v++; /* At the last loop past iteration it has got any other values since the before first postion of the array ex: [other][1][2][0][4][5][6]*/
  for(int j=0; j<n; j++){
    if(n-j == 1){ // to dont show , } at the end
      printf("%i", *p_n_v);
    }else{
      printf("%i, ", *p_n_v);
      p_n_v++;
    }
  }
  printf("}.\n");
}
