#include <stdio.h>
/* ch = readed character
   c = number of char
   d = number of digits
   s = number of simbols 
   e = evaluator
*/
int main(){
   char ch=7, i=65, j=97;
   int c=0, d=0, s=0, e=0; // upper 65- 90, lower 97-122

   while(ch != 46){
        printf("--> "); scanf("%c", &ch); printf("\n");
        if(ch != 46){
            while(i <= 90){ // check for the upper case characters
                if(i == ch){
                    c++;
                    e++; // A
                    break;
                }else{
                    while(j <= 122){ // check the lower case characters
                        if(j == ch){
                            c++;
                            j=97;// we neet con use j always since the a char = 97
                            e++;
                            break;
                        }else{
                            j++;
                        }      
                    }
                        if(e!=0){ // we neet to break the i loop in case the found the character as a lower
                            i=65; // the same than j here (we can initialice i in the next or above the line that j
                            break;
                        }else{
                            i++;
                            continue;
                        }
                }
            
            }
            if(e!=0){ //we neet to continue with the reading of the main loog in case that the character be a upper
                  // and a void the final condition to know if it's a digit number
                continue;   
            }
            else if(ch==48 || ch==49 || ch==50 || ch ==51 || ch ==52 || ch ==53 || ch ==54 || ch ==55 || ch ==56 || ch ==57){
                d++;
                continue;
            }
            else{
                s++;
                continue;
            }
        }else{
            break;
        }
   }
   
   printf("Number of letters: %i.\n", c);
   printf("Number of digits: %i.\n", d);
   printf("Number of other simbols: %i.\n", s);
   printf("Total: %i.\n", c+d+s);
   
   return 0;
   
}
  
