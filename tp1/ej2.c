#include <stdio.h>

int main () {
    char nombre[100];

    printf("ingrese su nombre \n");
    scanf("%99s" , nombre);
    printf("hola %s!\n", nombre);
    return  0;
}