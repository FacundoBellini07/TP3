// Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando el resultado final.
#include <stdio.h>
#include <conio.h>

int array1[] = {8, 35, 13, 3, 54};
int n = sizeof(array1)/sizeof(int);
int arr2[5]; 
int x;
void copia(int *array1, int *arr2, int *n);

int main(){
    printf("Valores array 1:\n");
    for (x = 0; x < n; x++)
    {
        printf("valor %d: %d\n", x, array1[x]);
    }
    
    copia(array1, arr2, &n);

    printf("\nValores array 2:\n");
    for (x = 0; x < n; x++)
    {
        printf("valor %d: %d\n", x, arr2[x]);
    }

    return 0;
}

void copia(int *array1, int *arr2, int *n){
    for (x = 0; x < *n; x++)
    {
        *(arr2 + x) = *(array1 + x);
    }
    
}
