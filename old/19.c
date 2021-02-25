#include <stdio.h> // input-output library
#include <math.h> // math operations 

int main() {
    char subject[3][10]= {"math", "physics", "chemical"}; // subjects's names
    float exam[3] = {0.90,0.80,0.85}; // porcentage for the exam of each subject
    float tasks[3] = {0.10,0.20,0.15}; // porcentage for each task of the subjects
    float n_exam[3]; // notes in each exam
    int num_tasks[3] = {3, 2, 3}; // number of tasks of each subject
    float n_tasks[3][3];
    
    // loop to require exam's notes
    for (int i = 0; i < 3; i++){
        printf("\nEnter the exam note for %s: ", &subject[i][0]); scanf("%f",&n_exam[i]);
        exam[i] *= n_exam[i];
        printf("\n\n");
}
    
    // loop to require the task notes for each subject and multiplicate with the asigned porcente 
    for (int i = 0; i < 3; i++) {
        printf("Enter %s task notes\n", &subject[i][0]);
        for (int j = 0; j < num_tasks[i]; j++) {
            printf("--> ");scanf("%f", &n_tasks[i][j]);
            n_tasks[i][j] *= tasks[i];
            printf("\n");
        }
    }
    printf("\n");
    
    
    // loop to calculate the final note to each subject
    for (int i = 0; i < 3; i++) {
        exam[i] += n_tasks[i][0];
        for (int j = 1; j < num_tasks[i]; j++) {
            exam[i] += n_tasks[i][j];
        }
    } 
    printf("\n\n");
    
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
    
    return 0;
}