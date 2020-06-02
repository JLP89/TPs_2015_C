#include <stdio.h>

int main()
     {
     int temp[24]; /* Con esto ya tenemos declaradas las 24 variables */
     float media = 0;
     int hora;

     /* Ahora tenemos que dar el valor de cada una */
     for( hora=0; hora<24; hora++ )
          {
          printf( "Temperatura de las %i: ", hora );
          scanf( "%i", &temp[hora] );
          media += temp[hora];
          }
     media = media / 24;

     printf( "\nLa temperatura media es %f\n", media );
     }
