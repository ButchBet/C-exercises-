#include <stdio.h> // input-output library
#include <stdbool.h> // boolean types 
#include <math.h> // extended math operators as saqure root or the powe of a number to other
int main () {
/*1.Si x,v y p son variables de tipo real, con valores 3.5, 1.4 y 6.0 respectivamente, determinar el
valor de la variable z de tipo real al realizar cada una de las asignaciones siguientes: 
z :=v - p / (x + p / x – v)
cout<<z
z :=p / x / v + p / x * v
cout<<z;
z:= (v – 3.0 * x / p) / (4.0 – v / (5.0 + p / x))
z :=2.0*p – 4.0/v + 5.0*x/(3.0+v*p – x) */

//    float x = 3.5;
//    float v = 1.4;
//    float p = 6.0;
//    float z;
//    
//    z = v-p/(x+p/x-v); // inicializacion de z
//    printf("z: %f \n", z);
//    z = p / x / v + p / x * v; // re-inicializacion de z
//    printf("z: %f \n", z);
//    
//    float a = v – (3.0 * x) / p;
//    float b = 5.0 + p / x 
//    float c = 4.0 – v / b;
//    z = a / c;
//    printf("z: %f \n", z);
//    
    
/*2. Suponga que x, v y p son variables de tipo real, con valores 3.5, 1.4 y 6.0 respectivamente; i,
k y cont son variables enteras con valores 5, 2 y –4, respectivamente; letra y c son variables de
tipo carácter con valores ‘p’ y ‘t’; y bandera y terminar de tipo booleano con valores falso y
verdadero respectivamente. Determine el valor de cada una de las variables, después de
ejecutar las siguientes instrucciones, en el orden en que aparecen.
x :=v + enteroAreal( caracterAentero( letra ) )
k :=( k–2*cont )* ( k–2*cont ) + i*( cont – k / 2.0 )/cont
v :=x + (p – raiz2(x) * ( v – x ) + 3.0) * p
bandera :=(terminar ¬(i+2 <>cont p>=v)) ( x+v) = p
cont :=cont + 1
i:= cont * realAentero(x * v – p/2.0) + k – i
p :=p + x – enteroAreal( piso( p+x) + 5 )
letra :=enteroAcaracter( k )
k :=( k + cont ) mod ( piso( p ) + techo( v ) ) */
    
    // Real type variables
    float x = 3.5, v = 1.4, p = 6.0;
    
    // Integer type variables
    int i = 5, k = 2, cont = -4;
    
    // Caracter type variables
//    char letra[2] = "c", c[2] = "t";
    char letra = 'c', c = 't';
    
    // boolean type variable
    bool bandera = false, terminar = true;
    
    x = v+(float)((int)(letra));
    k = (k-2*cont)*(k-2*cont)+i*(cont-k/2.0)/cont;
    v = (x+p-(sqrt(x))*(v-x) +3.0)*p;
    bandera = (terminar || !(i+2!=cont || p>=v)) || (x+v)==p;
    cont++;
    i = cont * (int)(x*v-p/2.0)+k/i;
    p = p+x-(float)((floor(p+x))+5);
    letra = (char)(k);
    int a = k+cont;          // We use this notation to can calculate an expretion that can bother the compiler
    int b = (floor(p))+(ceil(v));
    k = a%b;
    
    printf("x: %f\n k: %d\n v: %f\n bandera: %d\n cont: %d\n i: %i\n p: %f\n letra: %c", x,k,v,bandera,cont,i,p,letra);
    
    
    
    
    
    return 0;
}
