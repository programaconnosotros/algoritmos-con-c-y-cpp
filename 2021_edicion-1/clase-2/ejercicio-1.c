#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2;

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);

    if(fmod(numero1, 1) != 0) {
        printf("El valor ingresado es invalido");
        return -1;
    }

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);

    if(fmod(numero2, 1) != 0) {
        printf("El valor ingresado es invalido");
        return -1;
    }

    float suma = numero1 + numero2;
    printf("El resultado de la suma es: %f", suma);

    return 0;
}