#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cantidadAprobados = 0;
    int cantidadNotas = 0;

    float nota;

    printf("Ingrese la nota del alumno 1: ");
    scanf("%f", &nota);

    if(fmod(nota, 1) != 0 || nota > 10) {
        printf("El valor ingresado es invalido");
        exit(1);
    }

    while(nota >= 0) {
        cantidadNotas++;

        if(nota >= 6) {
            cantidadAprobados++;
        }

        printf("Ingrese la nota del alumno %d: ", cantidadNotas + 1);
        scanf("%f", &nota);

        if(fmod(nota, 1) != 0 || nota > 10) {
            printf("El valor ingresado es invalido");
            exit(1);
        }
    }

    float porcentaje = (cantidadAprobados * 100) / cantidadNotas;

    printf("El porcentaje de aprobados es: %.2f", porcentaje);

    return 0;
}
