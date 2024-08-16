#include <stdio.h>

int main () {
    int age;

    printf("que edad tenes?\n");
    scanf("%d", &age);

    if (age >=18)
    {
        printf("sos mayor de edad\n");
    } else {
        printf("no sos mayor de edad\n");
    }

}