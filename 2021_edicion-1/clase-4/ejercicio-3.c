#include "stdio.h"
#include "libreria/pcn.h"

void calcularPromedio(float primerNumero, float segundoNumero, float tercerNumero, float* resultado) {
    *resultado = (primerNumero + segundoNumero + tercerNumero) / 3;
}

int main() {
    float primerNumero = leerNumero("Ingrese el primer numero: ");
    validarNumeroEntero(primerNumero);

    float segundoNumero = leerNumero("Ingrese el segundo numero: ");
    validarNumeroEntero(segundoNumero);

    float tercerNumero = leerNumero("Ingrese el tercer numero: ");
    validarNumeroEntero(tercerNumero);

    float promedio;
    calcularPromedio(primerNumero, segundoNumero, tercerNumero, &promedio);

    printf("El promedio es igual a: %.2f", promedio);

    return 0;
}