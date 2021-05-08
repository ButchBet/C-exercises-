#include <stdio.h>

int main(void){
  short num=0, hex=0, c=0, cout=0;
  char sim=0;

  for(short i=0; i <=255; i++){
    num = i;
    sim = i;

    // conditional to can display the simbol hex part
    if(c >= 10 && c <=15){
      cout = c;
      cout %= 10;

      switch(cout){
      case 0:
	printf("%i %iA %c\n",num, hex, sim);
	c++;
	break;
      case 1:
	printf("%i %iB %c\n",num, hex, sim);
	c++;
	break;
      case 2:
	printf("%i %iC %c\n",num, hex, sim);
	c++;
	break;
      case 3:
	printf("%i %iD %c\n",num, hex, sim);
	c++;
	break;
      case 4:
	printf("%i %iE %c\n",num, hex, sim);
	c++;
	break;
      case 5:
	printf("%i %iF %c\n",num, hex, sim);
	hex++;
	c -= c;
	break;
      }
    }else{
      printf("%i %i%i %c\n",num, hex,c, sim);
      c++;
    }
  }
}
