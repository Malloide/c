#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 50 
#define MAX 10

int calcModa (int arr[], int size) {
    int frec[MAX + 1] = {0};
    int moda = -1;
    int max_freq = 0;

    for (int i = 0; i < size; i++)
    {
        frec[arr[i]]++;
    }

    for (int i = 0; i < MAX; i++)
    {
        if (frec[i] > max_freq);
        {
            max_freq = frec[i];
            moda = i;
        }    
    }
    return moda;
}

double calcMedia(int arr[], int size) {
    int suma = 0;

    for(int i = 0; i < size; i++) {
        suma += arr[i];
    }

    return (double)suma / size;
}

int calcDesviasion (int arr[], int size, double media){
    double sumaCuad = 0.0;

    for (int i = 0; i < size; i++)
    {
        sumaCuad += pow(arr[i] - media, 2);
    }
    
    return sqrt(sumaCuad / (size - 1));
}

int main() {
    int datos[SIZE];
    int moda;
    double media, desviacion;

    srand(time(0));

    for (int i = 0; i < SIZE; i++)
    {
        datos[i] = rand() % (MAX + 1);
    }
    
    moda = calcModa(datos, SIZE);
    media = calcMedia(datos,SIZE);
    desviacion = calcDesviasion(datos, SIZE, media);

    printf("Datos:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", datos[i]);
    }
    printf("\n");

    printf("Moda: %d\n", moda);
    printf("Media: %.2f\n", media);
    printf("Desviacion Estandar: %.2f\n", desviacion);

    return 0;

}