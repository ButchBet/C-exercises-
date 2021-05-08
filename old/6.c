#include <math.h> // math operations library
#include <stdio.h> // input-output library 


    int main() {
     /*Exersice number 1.a 
      * abs(-5)
      * pow(20,2)+pow(-5,2)
      * sqrt(100)+abs(10)
      * floor(7.5)-ceil(0.5)
      * pow(4,5)+sqrt(15)*/
      
//     // Exersice number 1.b
     const float PI = 3.14159;
     float radius = 3.5;
     float r = 7;
     
//     // Frustum of right circle cone
     float v = 1/3*(pow(r,2)+pow(radius,2))+r*radius;
     printf("The volume of the thight circle cone is: %f.\n", v);
     
//     //Fahrenheid to celcius
     float f = 250.8;
     float ftoc = (f-32)*5/9;
     printf("Pass fahrenheit to celcius, %f °F --> %f °C.\n",f,ftoc);
     
//     // Distance between two dots
     int x1 = 2, x2 = 5, y1 = 3, y2 = 7;
     int dis_bet_tow_dots = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
     printf("The distance between the dot A to dot B is: %i. \n", dis_bet_tow_dots);
     
//     // Slope of a straight line
     float sl_str_line = (y2-y1)/(x2-x1);
     printf("The slope of the straight line is: %f. \n", sl_str_line);
     
     // Exercise number 2
     float cm,mt,km;
//     float medides[]= {cm, mt, km};
//     int N = 3;
//     for (int i = 0; i<N; i++){
//         printf("Enter the value: ");
//         scanf("[%f] \n\n", &medides[i]);
//     }
     
     printf("Enter the cm: ");scanf("%f \n", &cm);
     
     printf("Enter the mt: ");scanf("%f \n", &mt);
     
     printf("Enter the km: ");scanf("%f \n", &km);
     
     float mc,kt,kc;
     mc = mt*100;
     kt = km*1000;
     kc = km*100000;
     
//     printf lines to display the square were we display the result 
     printf("._______________________________________________________________________________________________.\n");
     printf("|        |            |  \t         \t|  \t         \t|  \t         \t|\n");
     printf("| Value  | Converion  |  \t  cm     \t|  \t   mt    \t|  \t   km    \t|\n");
     printf("|        |            |  \t         \t|  \t         \t|  \t         \t|\n");
     printf("*************************************************************************************************\n");
     
     printf("._______________________________________________________________________________________________.\n");
     printf("|        |            |  \t         \t|  \t         \t|  \t          \t|\n");
     printf("|  %.0f\t       cm       \t  %.0f   \t   \t         \t   \t          \t\n",cm,cm);
     printf("|        |            |  \t         \t|  \t         \t|  \t          \t|\n");
     printf("*************************************************************************************************\n");
     
     printf("._______________________________________________________________________________________________.\n");
     printf("|        |            |  \t         \t|  \t         \t|  \t          \t|\n");
     printf("|  %.0f\t        mt      \t  %.0f   \t   \t  %.0f   \t   \t          \t\n",mt,mc,mt);
     printf("|        |            |  \t         \t|  \t         \t|  \t          \t|\n");
     printf("*************************************************************************************************\n");
     
     printf("._______________________________________________________________________________________________.\n");
     printf("|        |            |  \t         \t|  \t         \t|  \t          \t|\n");
     printf("|  %.0f\t        km      \t  %.0f   \t   \t  %.0f   \t   \t  %.0f    \t\n",km,kc,kt,km);
     printf("|        |            |  \t         \t|  \t         \t|  \t          \t|\n");
     printf("*************************************************************************************************\n\n");
     
     // Excercise number 3
     int n1 = 567, n2 = 937;
     int nn1 = (n1/100+n2%10)*100;
     int nn2 = ((n1%100)/10+n2/100)*10;
     int nn3 = (n1%10+(n2%100)/10)*1;
     int fn = nn1+nn2+nn3;
     
     printf("The result of the final addition between %i, %i, %i is: %i \n\n",nn1,nn2,nn3,fn);
     
     return 0;
}