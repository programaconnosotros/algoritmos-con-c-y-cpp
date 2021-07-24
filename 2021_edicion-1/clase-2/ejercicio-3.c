#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, numero3;

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

    printf("Ingrese el tercer numero: ");
    scanf("%f", &numero3);

    if(fmod(numero3, 1) != 0) {
        printf("El valor ingresado es invalido");
        return -1;
    }

    float promedio = (numero1 + numero2 + numero3) / 3;

    printf("El promedio es igual a: %.2f", promedio);

    return 0;
}