#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int num[10];

    for (int i = 0; i <  10; i++)
    {
        num[i] = i ;
    }
     
    srand(time(0));

    for (int i = 9; i > 0; i--)
    {
        int j = rand() % (i + 1);
        
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }

    printf("numeros random: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", num[i]);
    }
    
    return 0;
}