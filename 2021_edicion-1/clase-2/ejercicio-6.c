#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float cantidadNumeros;

    printf("Ingrese la cantidad de numeros a promediar: ");
    scanf("%f", &cantidadNumeros);

    if(fmod(cantidadNumeros, 1) != 0 || cantidadNumeros <= 0) {
        printf("El valor ingresado es invalido");
        exit(1);
    }

    float suma = 0;
    int numeroDeVuelta = 1;

    while(numeroDeVuelta <= cantidadNumeros) {
        float numero;

        printf("Ingrese el valor %d: ", numeroDeVuelta);
        scanf("%f", &numero);

        if(fmod(numero, 1) != 0) {
            printf("El valor ingresado es invalido\n");
            exit(1);
        }

        suma = suma + numero;

        numeroDeVuelta++;
    }

    printf("Suma de numeros: %f\n", suma);

    float promedio = suma / cantidadNumeros;

    printf("El valor del promedio es: %.2f", promedio);

    return 0;
}
