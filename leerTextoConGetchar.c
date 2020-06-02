
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
void main(){
int entero;
float real;
char ch;

printf (“Introduzca los siguientes datos: \n”);
printf (“Introduzca un entero:\t”);
scanf (“%d”,&entero);
printf (“\nIntroduzca un real y un carácter:\t”);
scanf (“%f %c”,&real, &ch);
printf (“\nLos valores introducidos son: %d %f %c”, entero, real,
ch);
}

getchar();
}
