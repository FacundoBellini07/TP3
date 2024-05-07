// Contar el numero de ocurrencias de un elemento en un arreglo usando puntero y funciones
#include <stdio.h>
#include <string.h>

char arr1[30];
char car = 'o';
int x;

int buscar(char *inicio, char *car);

int main(){
    strcpy(arr1, "Buenos Dias");

    printf("El arreglo es: %s\n", arr1);

    int n = buscar(arr1, &car);
    
    if (n == 0)
    {
        printf("\nno se encontro el caracter %c en la cadena %s", car, arr1);
    } else {
        printf("\nEl caracter '%c' se encontro %d veces en la cadena '%s'", car, n, arr1);
    }
 
    return 0;
}

int buscar(char *inicio, char *car){
    int n = 0;
    for (; *inicio !='\n'; inicio++)
    {
        if (*inicio == *car)
        {
            n++;
        }
    }
    
    return n;
}
