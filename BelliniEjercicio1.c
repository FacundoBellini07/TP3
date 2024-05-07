// Intercambiar el valor de dos variables usando punteros y funciones. Mostrando los valores iniciales y valores finales.
#include <stdio.h>
#include <conio.h>

int a, b;
void intercambio(int *a, int *b);

int main(){
    printf("ingrese el primer valor: ");
    scanf("%d", &a);
    printf("ingrese el segundo valor: ");
    scanf("%d", &b);
    printf("valores: \n%d \n%d", a, b);
    intercambio(&a, &b);
    printf("\nvalores intercambiados:\n%d \n%d", a, b);

    getch();
    return 0;
}

void intercambio(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}