#include <stdio.h>
#include <math.h>

int main () {
    int x = 100, r = 120000;
    float a, b, one_article_cost = 349.85422740526;
    
    a = x*ceil(one_article_cost);
    printf("The cost for manufacture %i articles is $%.0f. \n",x,a);
    
    x = 700;
    
    b =  350*(float)700-0.25*pow(700, 2);
    printf("The number of article that you can manufacture with $%i is %.0f. \n\n",r,b);
    return 0;
}
