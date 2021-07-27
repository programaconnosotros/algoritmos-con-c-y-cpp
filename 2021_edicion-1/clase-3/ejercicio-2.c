#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cantidadAprobados = 0;
    float cantidadNotas;

    printf("Ingrese la cantidad de notas: ");
    scanf("%f", &cantidadNotas);

    if(fmod(cantidadNotas, 1) != 0) {
        printf("El valor ingresado es invalido");
        exit(1);
    }

    for (int numeroDeVuelta = 1; numeroDeVuelta <= cantidadNotas; numeroDeVuelta++) {
        float nota;

        printf("Ingrese la nota del alumno %d: ", numeroDeVuelta);
        scanf("%f", &nota);

        if(fmod(nota, 1) != 0 || nota < 0 || nota > 10) {
            printf("El valor ingresado es invalido");
            exit(1);
        }

        if(nota >= 6) {
            cantidadAprobados++;
        }
    }

    float porcentaje = (cantidadAprobados * 100) / cantidadNotas;

    printf("El porcentaje de aprobados es: %.2f", porcentaje);

    return 0;
}
