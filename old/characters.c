#include <stdio.h>
#include <stdlib.h>

int main(){
  char *message;
  message = malloc(46);
  if((message = malloc(46)) == NULL){
    printf("Error in the allocation.\n");
    exit(1);
  }
  printf("Successful allocation.\n");
  //scanf("%s", (char *)message);
  message = "Hello World";
  puts(message);
  printf("%s", message);
}
