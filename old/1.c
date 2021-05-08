#include <stdio.h> // library input-output

// creation of the function that puts the condenat's dots
     /* r1 with [] informs the compiler 
      * that you are passing a one-dimensional 
      * array to the function. */
//int cor_dots_rec (int* Br[][], int* Yr[][], int N) { 
//    // loop to the two main arrays, that change the x axes of the blue rectangle
//    for (short i=0; i<=N; i++){
//        for (short j=0; j<=N; j++) {
//        printf("Cordenate = (%i,%i).\n", Br[*i][0],Yr[*j][1]);
//        }
//    }
//    return 0;
//}

int main (void){
    // defination of the blue square:Br and yellow:Yr that has the respective
    // cordenates with x and y axis
    int Br[2][2] = {{-1,-1}, {4,4}};
    int Yr[2][2] = {{-2,1},{6,3}};
    short N = 1;
    
    for (short i=0; i<=N; i++){
        for (short j=0; j<=N; j++) {
        printf("Cordenate = (%i,%i).\n", Br[i][0],Yr[j][1]);
        }
    }
 
//    cor_dots_rec (Br, Yr, 1);
    
    return 0;
}