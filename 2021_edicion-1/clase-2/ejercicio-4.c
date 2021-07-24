#include <stdio.h>
#include <math.h>

int main() {
    float cantidadNumeros;

    printf("Ingrese la cantidad de numeros a promediar: ");
    scanf("%f", &cantidadNumeros);

    if(fmod(cantidadNumeros, 1) != 0 || cantidadNumeros <= 0) {
        printf("El valor ingresado es invalido");
        return -1;
    }

    float suma = 0;

    for (int numeroDeVuelta = 1; numeroDeVuelta <= cantidadNumeros; numeroDeVuelta++) {
        float numero;

        printf("Ingrese el valor %d: ", numeroDeVuelta);
        scanf("%f", &numero);

        if(fmod(numero, 1) != 0) {
            printf("El valor ingresado es invalido");
            return -1;
        }

        suma = suma + numero;
    }

    float promedio = suma / cantidadNumeros;

    printf("El valor del promedio es: %.2f", promedio); 

    return 0;
}