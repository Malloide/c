#include <stdio.h>

int main () {
    int n, m ;
    int result;

    printf("ingrese un numero N: ");
    scanf("%d", &n);
    printf("ingrese un numero M: ");
    scanf("%d", &m);
    result = 0;
 
    for (int i = 0; i < m; i++)
    {
        result += n;
    }
    
    printf("el resultado de %d multiplicado por %d es %d.\n", n, m, result);
    return 0;
}