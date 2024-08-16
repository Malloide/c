#include <stdio.h>

int main() {
    int nacimiento_age;
    int actual_age  = 2024;
    int edad;

    printf("en que año naciste? \n");
    scanf("%d" , &nacimiento_age);

    edad = actual_age - nacimiento_age;

    printf("tenes %d años. \n", edad );
    return 0;
}