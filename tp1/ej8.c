#include  <stdio.h>   
#include  <time.h>

int main () {
    int dia,mes,age;
    int dia1, mes1, age1;
    int edad;

    printf("ingrese su fecha de nacimiento (dd/mm/aaaa)\n");
    scanf("%d%d%d",&dia,&mes,&age);

    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t); 

    dia1 = tm_info->tm_mday;
    mes1 = tm_info->tm_mon + 1;
    age1 = tm_info->tm_year + 1900;

    edad = age1 - age;



    printf("tu edad es %d años", edad);

}