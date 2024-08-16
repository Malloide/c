#include <stdio.h>

int main () {
    int i = 1;
    int num;
    printf("ingrese un num cualquiera\n");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}