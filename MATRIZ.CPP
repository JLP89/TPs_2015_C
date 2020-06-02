#include <stdio.h>
#include <stdlib.h>
main (void)
{
	char buff [10];
	double vectorA[2], vectorB[2], matriz[2][2], total;
	int c=0, i=0,  j=0;

	for (c=0; c<2; c++)
	{
		printf("Ingresar vector A[%d]:",c+1);
		gets(buff); vectorA [c]=atof(buff);

		printf("Ingresar vector B[%d]:",c+1);
		gets(buff); vectorB [c]= atof(buff);

	}
	for (j=0; j<2; j++)
	{
		for (i=0; i<2; i++)
		{
		printf("Ingresar un valor para la matriz[%d]:");
		gets(buff); matriz [i][j]=atof(buff);
		}
	}


	getchar();
}
