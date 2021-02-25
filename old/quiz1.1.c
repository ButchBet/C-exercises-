#include <stdio.h> // input-output library

int main(){
  // both programs variable
  int op;
  // variables to the first program
  float a,b,c,d;
  
  // varibles to the second program
  char subject[3][10]= {"math", "physics", "chemical"}; // subjects's names
  float exam[3] = {0.90,0.80,0.85}; // porcentage for the exam of each subject
  float tasks[3] = {0.10,0.20,0.15}; // porcentage for each task of the subjects
  float n_exam[3]; // notes in each exam
  int num_tasks[3] = {3, 2, 3}; // number of tasks of each subject
  float n_tasks[3][3];
  
  printf("\tMain menu\n");
  printf("1. first program\n2. second program\n-->");
  scanf("%i", &op);

  switch (op){
  case 1:
    printf("Enter a, b, c and d real number: ");scanf("%f %f %f %f", &a, &b, &c, &d);printf("\n");
   if (a>=b && a>=c && a>=d){ // a greater
      if (b<=c && b<=d){ // b lower
	if(c==d){
	  printf("Both numbers are equal: %f, %f.", c,d);
	}
        else if(c>d){
	  printf("The higer is: %f and the lower is: %f.", c,d);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", d,c);
	}
      }
      else if (c<=b && c<=d){ // c lower
	if(b==d){
	  printf("Both numbers are equal: %f, %f.", b,d);
	}
        else if(b>d){
	  printf("The higer is: %f and the lower is: %f.", b,d);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", d,b);
	}
      }
      else if (d<=b && d<=c){ // d lower
	if(c==b){
	  printf("Both numbers are equal: %f, %f.", b,c);
	}
        else if(c>b){
	  printf("The higer is: %f and the lower is: %f.", c,b);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", b,c);
	}
      }
    }
    
    else if (b>=a && b>=c && b>=d){ // b higer
      if (a<=c && a<=d){ // a lower
	if(c==d)e{
	  printf("Both numbers are equal: %f, %f.", c,d);
	}
        else if(c>b){
	  printf("The higer is: %f and the lower is: %f.", c,d);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", d,c);
	}
      }
      else if (c<=b && c<=d){ // c lower
	if(a==d){
	  printf("Both numbers are equal: %f, %f.", a,d);
	}
        else if(a>d){
	  printf("The higer is: %f and the lower is: %f.", a,d);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", d,a);
	}
      }
      else if (d<=a && d<=c){ // d lower
	if(c==a){
	  printf("Both numbers are equal: %f, %f.", a,c);
	}
        else if(c>a){
	  printf("The higer is: %f and the lower is: %f.", c,a);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", a,c);
	}
      }
    }
      
    else if (c>=a && c>=b && c>=d){ // c higer
      if (a<=b && a<=d){ // a lower
	if(b==d){
	  printf("Both numbers are equal: %f, %f.", b,d);
	}
        else if(b>d){
	  printf("The higer is: %f and the lower is: %f.", b,d);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", d,b);
	}
      }
      else if (b<=a && b<=d){ // b lowe
	if(a==d){
	  printf("Both numbers are equal: %f, %f.", a,d);
	}
        else if(a>d){
	  printf("The higer is: %f and the lower is: %f.", a,d);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", d,a);
	}
      }
      else if (d<=a && d<=b){ // d lower
	if(b==a){
	  printf("Both numbers are equal: %f, %f.", a,b);
	}
        else if(b>a){
	  printf("The higer is: %f and the lower is: %f.", b,a);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", a,b);
	}
      }
    }
      
    else if (d>=a && d>=b && d>=c){ // d higer
      if (a<=b && a<=c){ // a lower
	if(b==c){
	  printf("Both numbers are equal: %f, %f.", b,c);
	}
        else if(b>c){
	  printf("The higer is: %f and the lower is: %f.", b,c);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", c,b);
	}
      }
      else if (b<=a && b<=c){ // b lowe
	if(a==c){
	  printf("Both numbers are equal: %f, %f.", a,c);
	}
        else if(a>c){
	  printf("The higer is: %f and the lower is: %f.", a,c);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", c,a);
	}
      }
      else if (c<=a && c<=b){ // c lower
	if(b==a){
	  printf("Both numbers are equal: %f, %f.", a,b);
	}
        else if(b>a){
	  printf("The higer is: %f and the lower is: %f.", b,a);
	}
	else {
	  printf("The higer is: %f and the lower is: %f.", a,b);
	}
      }
    }
    else {
        printf("Error.");
    }
    break;
    
  case 2:
    // Exam reading and multiplication for the porcentage of each one
    printf("\nEnter the exam note for %s: ", &subject[1][0]); scanf("%f",&n_exam[0]);
    printf("\nEnter the exam note for %s: ", &subject[2][0]); scanf("%f",&n_exam[1]);
    printf("\nEnter the exam note for %s: ", &subject[3][0]); scanf("%f",&n_exam[2]);
    emam[0] *= n_exam[0];
    emam[1] *= n_exam[1];
    emam[2] *= n_exam[2];
    printf("\n\n");
    
    //  reuquire the task notes for each subject and multiplicate with the asigned porcente
            //math 
        printf("Enter %s task notes\n", &subject[0][0]);
            printf("--> ");scanf("%f", &n_tasks[0][0]);
	    printf("--> ");scanf("%f", &n_tasks[0][1]);
	    printf("--> ");scanf("%f", &n_tasks[0][2]);
            n_tasks[0][0] *= tasks[0];
	    n_tasks[0][1] *= tasks[0];
	    n_tasks[0][2] *= tasks[0];
            printf("\n");
	    // physaics
	printf("Enter %s task notes\n", &subject[1][0]);
            printf("--> ");scanf("%f", &n_tasks[1][0]);
	    printf("--> ");scanf("%f", &n_tasks[1][1]);
            n_tasks[1][0] *= tasks[1];
	    n_tasks[1][1] *= tasks[1];
            printf("\n");
	    // chemical
        printf("Enter %s task notes\n", &subject[2][0]);
            printf("--> ");scanf("%f", &n_tasks[2][0]);
	    printf("--> ");scanf("%f", &n_tasks[2][1]);
	    printf("--> ");scanf("%f", &n_tasks[2][2]);
            n_tasks[2][0] *= tasks[2];
	    n_tasks[2][1] *= tasks[2];
	    n_tasks[2][2] *= tasks[2];
            printf("\n");
 
    printf("\n");
    
    
    // calculate the final note to each subject
       //math
       exam[0] += n_tasks[0][0] + n_tasks[0][1] + n_tasks[0][2]; 
       //physics
       exam[1] += n_tasks[1][0] + n_tasks[1][1];
       //chemical
       exam[2] += n_tasks[2][0] + n_tasks[2][1] + n_tasks[2][2];
    printf("\n\n");

    // find the greater intermedy and lower note
    if (exam[0]>=exam[1] && exam[1]>=exam[2]){
      printf("%s: %.1f, %s: %.1f and %s: %.1f.\n", &subject[0][0], &exam[0], &subject[1][0], &exam[1], &subject[2][0]), &exam[2]); // math the greater and chemical
      exam[0] *= 0.50;                        // the lower 
      exam[1] *= 0.30;
      exam[2] *= 0.20;
    }
    else if (exam[0]>=exam[2] && exam[2]>=exam[1]){
      printf("%s: %.1f, %s: %.1f and %s: %.1f.\n", &subject[0][0], &exam[0], &subject[2][0], &exam[2], &subject[1][0]), &exam[1]); // math the greater and physics
      exam[0] *= 0.50;                        // the lower 
      exam[2] *= 0.20;
      exam[1] *= 0.30;
    }
    else if (exam[1]>=exam[2] && exam[2]>=exam[0]){
      printf("%s: %.1f, %s: %.1f and %s: %.1f.\n", &subject[1][0], &exam[1],&subject[2][0], &exam[2], &subject[0][0]), &exam[0]); // physics the greater and math
      exam[1] *= 0.50;                        // the lower 
      exam[0] *= 0.20;
      exam[2] *= 0.30;
    }
    else if (exam[1]>=exam[0] && exam[0]>=exam[2]){
      printf("%s: %.1f, %s: %.1f and %s: %.1f.\n", &subject[1][0], &exam[1], &subject[0][0], &exam[0], &subject[2][0], &exam[2]); // physics the greater and chemical
      exam[1] *= 0.50;                        // the lower 
      exam[2] *= 0.20;
      exam[0] *= 0.30;
    }
    else if (exam[2]>=exam[1] && exam[1]>=exam[0]){
      printf("%s: %.1f, %s: %.1f and %s: %.1f.\n", &subject[2][0], &exam[2], &subject[1][0], &exam[1], &subject[0][0]), &exam[0]); // chemical the greater and math
      exam[2] *= 0.50;                        // the lower 
      exam[0] *= 0.20;
      exam[1] *= 0.30;
    }
    else {
      printf("%s: %.1f, %s: %.1f and %s: %.1f.\n", &subject[2][0], &exam[2], &subject[0][0], &exam[0], &subject[1][0], &exam[1]); // chemical the greater and physcs
      exam[2] *= 0.50;
      exam[1] *= 0.20;
      exam[0] *= 0.30;
    }

    // loop to display the final note to each subject
    for (int i = 0; i < 3; i++) {
        if (exam[i] >= 5.0 || exam[i] == 5){
            exam[i] = 5.0;
            printf("The %s final note: %.1f. \n",&subject[i][0], exam[i]);
        }
        else {
            printf("The %s final note: %.1f. \n",&subject[i][0], exam[i]);
        }
    }
    break;
  default:
    printf("Error.");
  }
  printf("\n\n");
  return 0;
}
  
