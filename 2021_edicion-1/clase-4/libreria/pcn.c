#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "stdbool.h"

float leerNumero(char mensaje[]) {
    float numeroEscaneado;

    printf("%s", mensaje);
    scanf("%f", &numeroEscaneado);

    return numeroEscaneado;
}

float calcularRestoDeLaDivision(float numerador, float denominador) {
    return fmod(numerador, denominador);
}

bool noEsEntero(float numero) {
    int resto = calcularRestoDeLaDivision(numero, 1);
    return (resto != 0);
}

void validarNumeroEntero(float numero) {
    if(noEsEntero(numero)) {
        printf("El valor ingresado es invalido");
        exit(1);
    }
}

float calcularSuma(float sumando1, float sumando2) {
    return sumando1 + sumando2;
}
