#include <stdio.h> // input-output library

int main () {
  float height, width, area, cost = 30.0;
  printf("\nEnter the height and width in meters please: "); scanf("%f %f",&height, &width);

  area = height*width;

  printf("\n");

  if (area > 99 && area < 801){
    if (area >= 600) {
      cost *= area*0.75;
      printf("The cost for this terrain is: $%.1f\n",cost);
    }
    else if (area >= 400 && area < 600) {
      cost *= area*0.83;
      printf("The cost for this terrain is: $%.1f\n",cost);
    }
    else if (area >= 200 && area < 400) {
      cost *= area*0.90;
      printf("The cost for this terrain is: $%.1f\n",cost);
    }
    else {
      cost *= area;
      printf("The cost for this terrain is: $%.1f\n",cost);
    }
  }
  else {
    printf("The size of the terrain is not available, please enter measures tha multiplied gives an average between 100 and 800.\n");
  }

  return 0;
}

		   
    
    
    
