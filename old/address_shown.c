#include <stdio.h>
#define MAX 10;

void show_data(int x[], int *y); 
int total_array(float x[], double y[]);
int i[10] = {1,2,3,4,5,6,7,8,9,10}, x;
float f[10] = {1,2,3,4,5,6,7,8,9,10};
double d[10] = {1,2,3,4,5,6,7,8,9,10};
char choose[1] = {"N"}; 
int array[] = {1};
int costo;
int datos[3];

int *p_i = &i[0];

float *p_f = &f[0];

double *p_d = &d[0];

char *p_ch = choose;

int *p_costo = &costo;

int *p_datos = datos;

int main(void){
  /*
  printf("\n\t\tInteger\t\tFloat\t\tDouble");
  printf("\n=========================================================");

  //loop to show the address in each element that have the arrayes 
  for(x = 0; x < 10; x++){
    //printf("\nElement %d\t%p\t%p\t%p", x+1, (int *)&i[x],(int *)&f[x], (int *)&d[x]);
    //printf("\nElement %d\t%p\t%p\t%p", x+1, (void *)p_i++,(void *)p_f++, (void *)p_d++);
  }
  printf("\n=========================================================\n");
  /*scanf("%c", (char *)p_ch);
  printf("%c %c", choose[0], *p_ch);
  printf("First mode %i.\n",(int) array);
  printf("Second mode %i.\n", array[0]);

  scanf("%i", &costo);
  printf("1. %i.\n",costo);
  scanf("%i", p_costo);
  printf("2. %i.\n", *p_costo); 

  // scanf("%i", &datos[2]);
  //printf("%i. \n", datos[2]);

  p_datos += 2;
  scanf("%i", p_datos);
  printf("%i. \n", *p_datos);
  p_datos -= 2;

  show_data(datos, p_datos); */
  int total = total_array(f, d);
  printf("%i\n", total);
}

void show_data(int x[], int *y){
  for(int i = 0; i < 3; i++){
    printf("Element %i = %x --> %i.\n",i, (int)&x[i], x[i]);
  }
}

int total_array(float x[], double y[]){
  &x += MAX;
  &y += MAX;
 
  
  int total = &x + &y;
  return total;
  /*while(count < MAX){
    
  }*/
  
}
