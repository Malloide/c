#include <stdio.h>
#include <time.h>

int main() {
    int diaNacimiento, mesNacimiento, anioNacimiento;
    int diaActual, mesActual, anioActual;
    int edad;

    printf("Ingresa tu fecha de nacimiento (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &diaNacimiento, &mesNacimiento, &anioNacimiento);

    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    diaActual = tm_info->tm_mday;
    mesActual = tm_info->tm_mon + 1;  
    anioActual = tm_info->tm_year + 1900;  

    edad = anioActual - anioNacimiento;

    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }

    char *estacion;
    if (mesNacimiento >= 12 || mesNacimiento <= 2) {
        estacion = "verano";
    }else if (mesNacimiento >=3 && mesNacimiento <= 5 ){
        estacion = "otoño";
    }else if (mesNacimiento >= 6 && mesNacimiento <=8){
        estacion = "invierno";
    } else {
        estacion = "primavera";
    }
    
    

    printf("Tu edad es %d años\n", edad);
    printf("tu estacion es %s\n", estacion);

    return 0;
}