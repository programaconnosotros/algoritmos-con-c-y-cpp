#include "stdio.h"
#include "stdlib.h"
#include "math.h"

float calcularRestoDeLaDivision(float numerador, float denominador)
{
    return fmod(numerador, denominador);
}

bool noEsEntero(float numero)
{
    int resto = calcularRestoDeLaDivision(numero, 1);
    return (resto != 0);
}

float leerNumero(char mensaje[])
{
    float numeroEscaneado;

    printf("%s", mensaje);
    scanf("%f", &numeroEscaneado);

    return numeroEscaneado;
}

float leerNumeroEnteroPositivo(char mensaje[])
{
    float numero = leerNumero(mensaje);

    if (noEsEntero(numero) && numero <= 0)
    {
        printf("El valor ingresado es invalido.\n");
        exit(1);
    }

    return numero;
}

float obtenerNumeroEnteroPositivo(char mensaje[])
{
    float numero = leerNumero(mensaje);

    while (noEsEntero(numero) && numero <= 0)
    {
        printf("El valor ingresado es invalido.\n");
        numero = leerNumero(mensaje);
    }

    return numero;
}

void validarNumeroEntero(float numero)
{
    if (noEsEntero(numero))
    {
        printf("El valor ingresado es invalido");
        exit(1);
    }
}

float calcularSuma(float sumando1, float sumando2)
{
    return sumando1 + sumando2;
}

void cargarArreglo(float arreglo[], float cantidadDeElementos, char mensaje[])
{
    for (int indice = 0; indice < cantidadDeElementos; indice++)
    {
        arreglo[indice] = obtenerNumeroEnteroPositivo(mensaje);
    }
}

void mostrarArreglo(float arreglo[], float cantidadDeElementos, char mensaje[])
{
    for (int indice = 0; indice < cantidadDeElementos; indice++)
    {
        printf(mensaje, indice + 1, arreglo[indice]);
    }
}

float calcularSumaDeElementos(float arreglo[], int cantidadDeElementos)
{
    float suma = 0;
    for (int indice = 0; indice < cantidadDeElementos; indice++)
    {
        suma += arreglo[indice];
    }

    return suma;
}