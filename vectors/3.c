#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, counter=0;
    printf("Enter the nubers of elements for this array : "); scanf("%i", &n);

    int *p_array = (int *)malloc(n*sizeof(int));
    int *p_new_array = (int *)malloc(n*sizeof(int));
    
    if(p_array == NULL || p_new_array == NULL){
        printf("Unsuccessfull memory allocation.\n");
        exit(0);
    }else{
        // data reading and adding the pair digits to the new array or pair array 
        for(int i=0; i < n; i++){
            printf("Enter : "); scanf("%i", p_array);
            p_array++;
        }
        p_array -= n; // go back to the first position

        // indentify prime elements

        //showing the array with pair numbers
        printf("*p_new_array[%d] = {", counter);
        for(int i=0; i < counter; i++){
            if(i == counter-1){
                printf("%i}.\n", *p_new_array);
            }else{
                printf("%i, ", *p_new_array);
            }p_new_array++;
        }
    }
    return 0;
}


