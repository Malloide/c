#include <stdio.h>

int main () {
    int num;
    int primo = 1;

    printf("ingresa cualquier num: \n");
    scanf("%d", &num);

    if (num <= 1) {
        printf("ingresa un num mayor a 1: \n");
        return 0;
    }
    for (int i = 2; i <= num; i++) {
        int primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }           
        
        if (primo) {
            printf("%d ", i);
            }
            
        }
    
    printf("\n");
    return 0;
}        
    

