// Encontrar el mayor y el menor elemento de un arreglo usando punteros y funciones.
#include <stdio.h>
#include <conio.h>

int array[] = {50, 12, 90, -30, 22};
int mayor = 0, menor;
void mayormenor(int *array, int *mayor, int *menor, int *n);

int main(){
    int x;
    int n = sizeof(array) / sizeof(array[0]);
    for (x = 0; x < n; x++)
    {
        printf("Numero %d: %d\n", x + 1, array[x]);
    }

    mayormenor(array, &mayor, &menor, &n);
    
    printf("El numero mas alto del vector es: %d\n", mayor);
    printf("El numero mas bajo del vector es: %d\n", menor);

    return 0;
}

void mayormenor(int *array, int *mayor, int *menor, int *n){
    int i;

    for (i = 0; i < *n; i++)
    {
        if (*(array + i) > *mayor)
        {
            *mayor = *(array + i);
        }
    }

    *menor = *(array + 0);
    for (i = 0; i < *n; i++)
    {
        if (*(array + i) < *menor)
        {
            *menor = *(array + i);
        }   
    }    
}
