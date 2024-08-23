#include <stdio.h>
#define SIZE 5

int main()
{
    int vector1[SIZE] = {5, 6, 7, 8, 9};
    int vector2[SIZE] = {4, 2, 2, 1, 4};
    int suma[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        suma[i] = vector1[i] + vector2[i];
    }

    printf("vector1: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", vector1[i]);
    }
    printf("\n");

    printf("vector2: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", vector2[i]);
    }
    printf("\n");

    printf("\nSuma vectorial: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", suma[i]);
    }
    printf("\n");

    return 0;
}