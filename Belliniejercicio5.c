// Concatenar dos cadenas usando punteros y funciones.
#include <stdio.h>
#include <conio.h>
#include <string.h>

char array1[20];
char array2[20];
int x;
void junta(char *array1, char *array2);

int main(){
    strcpy(array1, "Hola ");
    strcpy(array2, "mundo");

    printf("Primer cadena: %s\n", array1);
    printf("Segunda cadena: %s\n", array2);

    junta(array1, array2);
    return 0;
}

void junta(char *array1, char *array2){
    strcat(array1, array2);
    printf("El array final es: %s", array1);
}

