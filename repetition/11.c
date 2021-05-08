#include <stdio.h> // input-output library
#include <math.h> // math operations 

int main() {
    char subject[3][10]= {"math", "physics", "chemical"}; // subjects's names
    float exam[3] = {0.90,0.80,0.85}; // porcentage for the exam of each subject
    float tasks[3] = {0.10,0.20,0.15}; // porcentage for each task of the subjects
    float n_exam[3]; // notes in each exam
    int num_tasks[3] = {3, 2, 3}, i=0, j=0; // number of tasks of each subject
    float n_tasks[3][3]; // note tasks 3 subjects with a max of 3 index

    float posi[3]; // positionate since lower to greater note
    
    // loop to require exam's notes
    for (i = 0; i < 3; i++){
        printf("\nEnter the exam note for %s: ", &subject[i][0]); scanf("%f",&n_exam[i]);
        exam[i] *= n_exam[i];
        printf("\n\n");
}
    
    // loop to require the task notes for each subject and multiplicate with the asigned porcente 
    for (i = 0; i < 3; i++) {
        printf("Enter %s task notes\n", &subject[i][0]);
        for (j = 0; j < num_tasks[i]; j++) {
            printf("--> ");scanf("%f", &n_tasks[i][j]);
            n_tasks[i][j] *= tasks[i];
            printf("\n");
        }
    }
    printf("\n");
    
     
    // loop to calculate the final note to each subject
    for (i = 0; i < 3; i++) {
        exam[i] += n_tasks[i][0];
        for (j = 1; j < num_tasks[i]; j++) {
            exam[i] += n_tasks[i][j];
        }
    } 
    printf("\n\n");
    
    // loop to display the final note to each subject
    for (i = 0; i < 3; i++) {
        if (exam[i] >= 5.0){
            exam[i] = 5.0;
            printf("The %s final note: %.1f. \n",&subject[i][0], exam[i]);
        }
        else {
            printf("The %s final note: %.1f. \n",&subject[i][0], exam[i]);
        }
    }

//    // loop to know the lower note
//    for (i = 0; i < 3; i++){
//      if (exam[i] <= exam[i++] && exam[i++] != 0){
//	posi[0] = exam[i];
//      }else{
//	posi[0] = exam[i++];
//      }
//    }
//
//    // loop to know the greater note
//    for (i = 0; i < 3; i++){
//      if (exam[i] <= exam[i++] && exam[i++] != 0){ // !=0 brecase if 0 and 1 index arent the greater then the last position will be the greater and viceversa  
//	posi[1] = exam[i];
//      }else{
//	  posi[1] = exam[i++];
//      }
//    } 
//
//    printf("The lower note is: %.1f and greater is: %.1f\n", posi[0], posi[1]);
    return 0;
}
