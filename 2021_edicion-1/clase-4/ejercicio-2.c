#include <stdio.h>
#include "libreria/pcn.h"

int main() {
    float numerador = leerNumero("Ingrese el numerador: ");
    validarNumeroEntero(numerador);

    float denominador = leerNumero("Ingrese el denominador: ");
    validarNumeroEntero(denominador);

    float division = calcularDivision(numerador, denominador);

    printf("El resultado de la division es: %f\n", division);

    return 0;
}