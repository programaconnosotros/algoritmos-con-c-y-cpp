#include <stdio.h>
#include <math.h>

int main() {
    float numerador, denominador;

    printf("Ingrese el numerador: ");
    scanf("%f", &numerador);

    if(fmod(numerador, 1) != 0) {
        printf("El valor ingresado es invalido");
        return -1;
    }

    printf("Ingrese el denominador: ");
    scanf("%f", &denominador);

    if(fmod(denominador, 1) != 0 || denominador == 0) {
        printf("El valor ingresado es invalido");
        return -1;
    }

    float division = numerador / denominador;

    printf("El resultado de la division es: %f\n", division);

    return 0;
}