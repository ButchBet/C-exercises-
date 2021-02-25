#include <stdio.h>/// include input-output library 
#include <math.h>/// include math operators 

/// celcius to fahnrenheid and kelvin
float C_to_FaK(float measure) {
    float CtoF = (float)5/9*measure+32, CtoK = measure+273.15;
    printf(".-------------------------------------------------------.\n");
    printf("|      |\t°C\t|\t°F\t|\t°K\t|\n");
    printf(".-------------------------------------------------------.\n");
    printf("|  °C  |\t  \t|\t%.1f\t|\t%.1f\t|\n",CtoF,CtoK);
    printf(".-------------------------------------------------------.\n\n");
    return 0;
}

/// kelvin to celcius and fahnrenheid
float K_to_CaF(float measure) {
    float KtoC = measure-273.15, KtoF = (float)5/9*measure-459.67;
    printf(".-------------------------------------------------------.\n");
    printf("|      |\t°C\t|\t°F\t|\t°K\t|\n");
    printf(".-------------------------------------------------------.\n");
    printf("|  °K  |\t%.1f\t|\t%.1f\t|\t\t|\n",KtoC,KtoF);
    printf(".-------------------------------------------------------.\n\n");
    return 0;
}

/// fahnrenheid to celcius and kelvin 
float F_to_CaK(float measure) {
    float FtoC = (float)5/9*(measure-32), FtoK = (float)5/9*(measure+459.67);
    printf(".-------------------------------------------------------.\n");
    printf("|      |\t°C\t|\t°F\t|\t°K\t|\n");
    printf(".-------------------------------------------------------.\n");
    printf("|  °C  |\t  \t|\t%.1f\t|\t%.1f\t|\n",FtoC,FtoK);
    printf(".-------------------------------------------------------.\n\n");
    return 0;
}

int main(void){
    char option;
    float measure;
    printf("Enter the kind of measure: C, F or K : ");scanf("%c",&option); // read the kind of measure 
    
    printf("\nEnter the measure: ");scanf("%f", &measure);printf("\n\n"); // the last printf is to avoid 
                                                                         // a frecuent running error.
    ///measure = &measure:
    
    switch ((int)option){
        case 67:
        C_to_FaK(measure);
        break;
        case 70:
        F_to_CaK(measure);
        ///F_to_CaK(measure);
        break;
        case 75:
        K_to_CaF(measure);
        ///K_to_FaC(measure);
        break;
        default:
        printf("Error (Incorrect measure.)");
    }
}