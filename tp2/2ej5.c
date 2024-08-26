#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int num[20];
    int unico[20];
    int contadorUnico = 0;
    
    srand(time(0));

    for (int i = 0; i < 20; i++)
    {
        num[i] = rand() % 10 ;
    } 
     
    for (int i = 0; i < 20; i++)
    {
        int Duplicado = 0;
        for (int j = 0; j < contadorUnico; j++)
        {
            if (num[i] == unico[j])
            {
                Duplicado = 1;
                break;
            }   
        }
        if (!Duplicado) {
            unico[contadorUnico++] = num[i];
        }   
    }

    printf("numeros random: \n");
    for (int i = 0; i < contadorUnico; i++)
    {
        printf("%d \n", unico[i]);
    }
    
    return 0;
}