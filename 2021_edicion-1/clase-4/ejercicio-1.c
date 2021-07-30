#include "stdio.h"
#include "libreria/pcn.h"

int main() {
    float primerNumero = leerNumero("Ingrese el primer numero: ");
    validarNumeroEntero(primerNumero);

    float segundoNumero = leerNumero("Ingrese el segundo numero: ");
    validarNumeroEntero(segundoNumero);

    float suma = calcularSuma(primerNumero, segundoNumero);

    printf("El resultado de la suma es: %f", suma);

    return 0;
}