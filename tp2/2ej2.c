#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int num[10];
    int frecuence[10] = {0};
    
    srand(time(0));

    for (int k = 0; k < 10; k++)
    {
        for (int i = 0; i <  10; i++)
        {
            num[i] = i ;
        }
        
        for (int i = 9; i > 0; i--)
        {
            int j = rand() % (i + 1);
            
            int temp = num[i];
            num[i] = num[j];
            num[j] = temp;
        }
    }
        
    for (int i = 0; i < 10; i++)
    {
        frecuence[num[i]]++;
    }
         


    printf("Frecuencia de aparición de cada número:\n");
    for(int i = 0; i < 10; i++) {
        printf("Número %d: %d veces\n", i, frecuence[i]);
    }
    return 0;
}