#include <stdio.h>
#include <stdlib.h>

void reading_data(char *point);

int main(void){
  char *message = malloc(20), *p_m;
  if((message = (char *)malloc(20)) == NULL){
    puts("Error.");
  }else{
    printf("Enter your entire name : ");
    char 
    while((char *)(p_m = fgets(message, int 20, stdin)) != NULL){
      puts(message);
    }
  }

  
  char message[20], *p_m = message;
  /*printf("Enter your entire name : ");
  while( *(p_m = gets(message)) != NULL){
    puts(message);
    }*/
  puts("Thanks and good-bye");
}
