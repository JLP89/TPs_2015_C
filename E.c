#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void){

int i, j, vA[1][2], vB[2][1], vR[1][2];
int vFila[3], vMatriz[3][3], vRes[3][3];
int valor;
do{
printf("Que desea hacer? \nMultiplicar dos vectores - presione 1 \nMultiplicar vector * matriz - presione 2 \n");
scanf("%d", &valor);
}
while(valor != 2 && valor != 1);

if (valor == 1){
    /* EJERCICIO 1

       Cargar vA[] */
    for(i=0; i<1; i++){
        for(j=0; j<2; j++){
            printf("Valor [%d][%d] del vector vA: ", i+1, j+1);
            scanf("%d", &vA[i][j]);
            /* printf("%d \n", vA[i][j]); */
        }
    }

    /* Cargar vB[] */
    for(i=0; i<1; i++){
        for(j=0; j<2; j++){
            printf("Valor [%d][%d] del vector vB: ", j+1, i+1);
            scanf("%d", &vB[j][i]);
            /* printf("%d \n", vA[j][i]); */
        }
    }
