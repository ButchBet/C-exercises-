#include <stdio.h>

int main(){
  int N=0, i=1;
  float n=0, n_ave_n=0, ne_count=0, n_ave_p=0, po_count=0;

  printf("Enter the number of elements to read: "); scanf("%i", &N); printf("\n");

  while(i<=N){
    printf("--> "); scanf("%f", &n); printf("\n");
    if(n<0){
      n_ave_n += n;
      ne_count++;
    }
    else if(n>0){
      n_ave_p += n;
      po_count++;
    }
    i++;
  }
  printf("The average of the negative numbers addition is: %.2f. \n", n_ave_n/ne_count);
 printf("The average of the positivie numbers addition is: %.2f. \n", n_ave_p/po_count);

 return 0;
}
