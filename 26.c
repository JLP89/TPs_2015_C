#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{
    int cont , i ;
    char buff[10];
    struct _HValue
    {
        time_t _Fecha;
        double _Valor;
    };
struct _HTags
{
 struct _HValue _dato;
    char _Description[80];
    int _Grupo;
}_Histo[Max]
   for(i=0;i<Max;i++)
   {
       printf("Ingresar valor :\n);
  gets(buff); _Histo[i]._dato._Valor=atof(buff);
  _Histo[i]._Dato._Fecha=time(null);
  gets(_Histo[i]._Descripcion);
  _Histo[i]._Grupo=i;
   }

}
