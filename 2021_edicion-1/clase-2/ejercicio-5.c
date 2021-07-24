#include <stdio.h>
#include <math.h>

int main() {
    int cantidadAprobados = 0;

    for (int numeroDeVuelta = 1; numeroDeVuelta <= 5; numeroDeVuelta++) {
        float nota;

        printf("Ingrese la nota del alumno %d: ", numeroDeVuelta);
        scanf("%f", &nota);

        if(fmod(nota, 1) != 0 || nota < 0 || nota > 10) {
            printf("El valor ingresado es invalido");
            return -1;
        }

        if(nota >= 6) {
            cantidadAprobados++;
        }
    }

    float porcentaje = (cantidadAprobados * 100) / 5;

    printf("El valor del porcentaje es: %.2f", porcentaje); 

    return 0;
}