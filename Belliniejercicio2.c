// Encontrar la suma y el promedio de los elementos de un arreglo usando punteros y funciones.
#include <stdio.h>

int largo = 5;
int uno[5];
int x, suma;
float prom;
void calculos(int *uno, int largo, int *suma, float *prom);

int main(){
    printf("ingrese 5 valores\n");
    for (x = 0; x < largo; x++)
    {
        printf("valor %d: ", x+1);
        scanf("%d", &uno[x]);
    }

    calculos(uno, largo, &suma, &prom);

    printf("\n\nsuma: %d \npromedio: %.3f", suma, prom);
    getchar();
    return 0;
}

void calculos(int *uno, int largo, int *suma, float *prom){
    int x;
    *suma = 0;
    for (x = 0; x < largo; x++)
    {
        *suma += *(uno + x);
    }
    *prom = (float)*suma / 2;
}
