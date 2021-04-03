#include <stdio.h>

int i[10] = {1,2,3,4,5,6,7,8,9,10}, x;
float f[10] = {1,2,3,4,5,6,7,8,9,10};
double d[10] = {1,2,3,4,5,6,7,8,9,10};
char choose[1] = {"N"};

int *p_i = &i[0];

float *p_f = &f[0];

double *p_d = &d[0];

char *p_ch = &choose[0];

int main(void){
  printf("\n\t\tInteger\t\tFloat\t\tDouble");
  printf("\n=========================================================");

  /* loop to show the address in each element that have the arrayes */
  for(x = 0; x < 10; x++){
    //printf("\nElement %d\t%p\t%p\t%p", x+1, (int *)&i[x],(int *)&f[x], (int *)&d[x]);
    //printf("\nElement %d\t%p\t%p\t%p", x+1, (void *)p_i++,(void *)p_f++, (void *)p_d++);
  }
  printf("\n=========================================================\n");
  scanf("%c", (char *)p_ch);
  printf("%c %c", choose[0], *p_ch);
}
