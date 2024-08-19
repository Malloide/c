#include <stdio.h>

int main () {
    int num, contador  = 0;

    printf("Ingrese un número entero: \n");
    scanf("%d", &num);

    if (num == 0)
    {
        contador = 1;
    } else {
         
        num = (num < 0) ? -num : num;

        while (num > 0)
        {
            num /= 10;
            contador++;
        }
         
    }
    printf("la cantidad de digios es %d\n", contador);

    return 0;
        
}