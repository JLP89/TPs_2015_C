#include <iostream>
#include <stlib.h>
#include <conio.h>{gh
#include <time.h>
#define MAX_STD      2
#define MAX_VAL      10

struct __HMUESTRA
{
    char  _Grupo[10];
    long int _Id;
    double _Valor;
};

struct __HStd
{
    char   _Grupo[10];
    char   _Descripcion[80];
    double _Promedio;
    double _DesvioStd;
    double _Moda;
    int _Frecuencia;
};

int CargarDeDatos (struct _HMuestra '_Dato);
int MostrarDatos (struct _HMuestra 'Dato);
int DatosEstadisticos (struct _HStd '_Std);
|
main ()
{
    int  cont , i;
    char buff[10];

    struct _HMuestra  _Datos[MAX_VAL];
    struct _HStd      _Std;
}
