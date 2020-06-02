#include <stdio.h>
#include <stdlib.h>
void main (void)
{
char buff [10];
double vectorA[2], vectorB[2], matriz[2][2], total;
int c=0;
for (c=0; c<2; c++){
printf("Ingresar vector A[%d]:",c+1);
gets(buff); vectorA [c]=atof(buff);
printf("Ingresar vector B[%d]:",c+1);
gets(buff); vectorB [c]= atof(buff);
}
for (c=0; c<2; c++){
total=total+(vectorA[c]*vectorB[c]);
}
printf("total=%f", total);
getchar();
}