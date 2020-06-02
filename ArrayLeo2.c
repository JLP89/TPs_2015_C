#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(void)
{
//defino las variables
float vector [5];
int c ,i,j;
int temp;
int sum , prom ;


//Cargar datos
for(c=0;c<5;c++)
 {
  printf("Ingresar %d Numero : \n" ,c+1);
  scanf("%f",& vector[c]);
 }

/*Ordenar de menos a mayor por  metodo burbuja pero no andaaa en que le estoy errando
for(i=0;i<5;i++)
 {
  for(j=i+1;j<5;j++)
    {
     if(vector[j]<vector[i])
      {
        temp=vector[j];
        vector[j]=vector[i];
        vector[i]=temp;
      }
    }
 }

//Calcula el promedio de los valores cargados en el array tampoco lo hace
for(i=0;i<5;i++)
 {
  sum=sum+vector[i];
 }
prom=(sum/5);

//Muestra el array..
for(i=0;i<4;i++)
 {
  for(c=0;c<5;c++)
   {
    printf("vector[%d]=%f \n",c,vector[c]);
   //printf("vector",vector);
   }
 }
    printf("El promedio es :",prom);

*/
getchar();


}

