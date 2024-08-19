#include <stdio.h>

int main () {
    int num;
    long long factorial = 1;

    printf("ingrese un numero natural positivo: \n");
    scanf("%d", &num);

    if (num < 0){
        printf("el numero debe ser positivo\n");
    }else{
        for (int i = 1; i <= num; i++){
            factorial*= i;
        }
        
    }
     
    printf("el factorial es de %d es %lld\n", num, factorial );

    return 0;
}