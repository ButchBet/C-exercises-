#include <stdio.h>
#include <stdlib.h>

int main(void){
	char input[40];
	begining: ;
	printf("--> "); gets(input);
	
	/* Check if the input is empty or not*/
	if(input[0] == '\0'){
		goto begining;
	}else{
		system(input);
	}
}
