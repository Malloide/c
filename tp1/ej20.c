#include <stdio.h>

int main () {
    float n, m, result;
    char o;
      

    printf("ingresa el primer numero: \n ");
    scanf("%e", &n);
    printf("Ingresa el operador (+, -, *, /): ");
    scanf(" %c", &o);
    printf("ingresa el segundo numero: \n ");
    scanf("%e", &m);

    switch(o) {
        case '+':
            result = n + m;
            break;
        case '-':
            result = n - m;
            break;
        case '*':
            result = n * m;
            break;
        case '/':
            if (m == 0) {
                printf("Error: Division por cero.\n");
                return 1;
            }
            result = n / m;
            break;
        default:
            printf("Error: Operador no valido.\n");
            return 1;
    }

    printf("el resultado es: %.2f\n", result);

    return 0;
    
}