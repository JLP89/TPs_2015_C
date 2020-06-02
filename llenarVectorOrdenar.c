#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
int vector[5], i=0 ,j=0,c=0;
int max, temp;
char buff[20],buffer;


for( i=0; i<5; i++ )
          {
          printf( "Ingrese el %i valor: ", temp);
          scanf( "%i", &vector[temp] );
          }

int vector [5], i=0, c=0;
	int max;
	char buff[20], buffer;
	for (i = 0; i < 5 ; i++)
	{
		printf("Ingresar numero entero\n");
		gets(buff);
		vector[i]=atoi (buff);
	}
/*for(i=0;i<5;i++)
{
    printf("Ingresar  numero entero :\n");
    gets(buff);
    vector[i]=atoi(buff);
    //muestra lo cargado
    for(i=0;i<5;i++)
    {
        printf("El numero es  %d \n",vector[i]);
        getchar();
    }
}
*/

    //Ordenar
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if (vector[j]<vector[i])
            {
                char buff =(vector[j]);
                vector[j]=vector[i];
                vector[i]=temp;
            }
        }
    }


    /*Ordenar
    max=vector[i];
    for(i=0;i<5;i++)
    {
        if vector[i]>max
    }
    */
getchar();
}

