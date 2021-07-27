# Implementando soluciones simples en C

- **Instructor**: Agustín Sánchez (GitHub: *agustin-sanc*, Discord: *agustin_sz#4065*)
- **Lugar**: servidor de Discord de **programaConNosotros**
- **Fecha**: viernes 23 de julio, 2021

## Ejercicio 1

Desarrollar un programa que permita calcular la suma de 2 números enteros indicados por el usuario.

- **Solución**
    - **Análisis del problema**
        - **Entrada**: 2 números enteros, indicados por el usuario
        - **Proceso**: sumar los 2 números enteros
        - **Salida**: resultado de la suma de los 2 números enteros
    - **Diseño del algoritmo**
        1. Pedirle al usuario el valor del primer número entero y almacenarlo en una variable
        2. Pedirle al usuario el valor del segundo número entero y almacenarlo en una variable
        3. Sumar los 2 números enteros indicados por el usuario
        4. Mostrar el resultado de la suma de los 2 números enteros
    - **Implementación en C**

        ```c
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
        ```

        - **Documentación de la función `fmod`**

            [fmod](https://www.cplusplus.com/reference/cmath/fmod/)

## Ejercicio 2

Desarrollar un programa que permita calcular la división de 2 números enteros indicados por el usuario. Tener en cuenta que no se puede dividir en 0.

- **Solución**
    - **Análisis del problema**
        - **Entrada**: los 2 números enteros indicados por el usuario
        - **Proceso**: calcular el resultado de la división si el denominador es distinto de cero
        - **Salida**: el resultado de la división de los 2 números enteros
    - **Diseño del algoritmo**
        1. Pedirle al usuario el valor del primer número entero y almacenarlo en una variable
        2. Pedirle al usuario el valor del segundo número entero y almacenarlo en una variable
        3. Verificar que el denominador es distinto de cero
            1. Si el denominador es igual a cero, mostrar mensaje de error al usuario y terminar la ejecución del programa
            2. Si el denominador es distinto de cero, calcular la división de los 2 números
        4. Mostrar el resultado de la división
    - **Implementación en C**

        ```c
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
        ```

## Ejercicio 3

Desarrollar un programa que permita calcular el promedio de 3 números enteros indicados por el usuario.

- **Solución**
    - **Análisis del problema**
        - **Entrada**: los 3 números enteros indicados por el usuario
        - **Proceso**: sumar los 3 números y dividirlos en 3
        - **Salida**: el promedio de los 3 números enteros
    - **Diseño del algoritmo**
        1. Pedirle al usuario el valor del primer número entero y almacenarlo en una variable
        2. Pedirle al usuario el valor del segundo número entero y almacenarlo en una variable
        3. Pedirle al usuario el valor del tercer número entero y almacenarlo en una variable
        4. Calcular la suma de los 3 números enteros
        5. Dividir la suma de los 3 números enteros en 3
        6. Mostrar el resultado del promedio de los 3 números enteros
    - **Implementación en C**

        ```c
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
        ```

## Ejercicio 4

Desarrollar un programa que permita calcular el promedio de N números enteros indicados por el usuario.

- **Solución**
    - **Análisis del problema**
        - **Entrada**
            - Cantidad de números enteros a promediar (tiene que ser mayor a 0)
            - Números enteros a promediar (puede ser cualquier número entero)
        - **Proceso**: sumar todos los números indicados por el usuario y dividirlo en la cantidad de números enteros a promediar, si la cantidad de números enteros a promediar es un número positivo mayor a 0
        - **Salida**: promedio de los números enteros
    - **Diseño del algoritmo**
        1. Pedirle al usuario la cantidad de números enteros que desea promediar
        2. Comprobar que la cantidad de números enteros a promediar sea un número entero positivo mayor a 0. En caso de no serlo, mostrar el error al usuario y finalizar la ejecución del programa
        3. Pedirle al usuario que nos diga cada uno de los números enteros que desea promediar, en relación a la cantidad de números enteros a promediar que se indicó en el paso 1
        4. Sumar los números enteros ingresados por el usuario
        5. Dividir la suma en la cantidad de números enteros (indicada en el paso 1)
        6. Mostrar el resultado del promedio
    - **Implementación en C**

        ```c
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

            int numeroDeVuelta = 1;

            for (numeroDeVuelta; numeroDeVuelta <= cantidadNumeros; numeroDeVuelta++) {
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
        ```

    - **Aclaraciones sobre el ciclo de repetición `for` en C**
        - El `for` está formado por 3 partes
        - La primera parte sirve para declarar qué variable cumplirá el rol de contador, para saber cuántas veces se ejecutará el bloque del `for`
        - La tercera parte sirve para definir qué es lo que pasa apenas termina de ejecutarse el bloque del `for`. Generalmente, lo que se hace en ese paso es incrementar en 1 el valor del contador definido en la primera parte del `for`
        - La segunda parte es una condición que sirve para evaluar si el bloque del `for` debe seguir ejecutandose o no. Esta parte se ejecuta luego de que se haya ejecutado la tercera parte.

## Ejercicio 5

Desarrollar un programa que permita calcular el porcentaje de alumnos aprobados en un examen. La nota de cada uno de los 5 alumnos debe ser ingresada por el usuario. Se considera aprobado aquel examen cuya nota sea mayor o igual a 6.

- **Solución**
    - **Análisis del problema**
        - **Entrada**: nota del examen de cada uno de los alumnos
        - **Proceso**
            1. Contar la cantidad de alumnos aprobados
            2. Calcular el porcentaje de alumnos aprobados
        - **Salida**: porcentaje de alumnos aprobados
    - **Diseño del algoritmo**
        1. Pedirle al usuario cada una de las notas y validar que estén dentro del rango 0 a 10
        2. Inicializar el contador de alumnos aprobados en 0
        3. Para cada nota, comprobar si es mayor o igual a 6
            1. Si es así, incrementar el contador de alumnos aprobados en 1
            2. Si no es así, pasar a la comprobación de la siguiente nota (si es que queda alguna)
        4. Calcular el porcentaje de alumnos aprobados

            $$porcentaje = \frac{cantidad \cdot 100}{5}$$

        5. Mostrar el resultado del porcentaje de alumnos aprobados
    - **Implementación en C**

        ```c
        #include <stdio.h>
        #include <math.h>

        int main() {
            int cantidadAprobados = 0;

            int numeroDeVuelta = 1;

            for (numeroDeVuelta; numeroDeVuelta <= 5; numeroDeVuelta++) {
        		    float nota;
                
        				printf("Ingrese la nota del alumno %d: ", numeroDeVuelta);
                scanf("%f", &nota);

                if(fmod(nota, 1) != 0 || nota < 0 || nota > 10) {
                    printf("El valor ingresado es invalido");
                    return -1;
                }

                if(nota >= 6) {
                    cantidadAprobados++;
                }
            }

            float porcentaje = (cantidadAprobados * 100) / 5;

            printf("El valor del porcentaje es: %.2f", porcentaje); 

            return 0;
        }
        ```

# Desafíos post-clase

## Ejercicio 1

Desarrollar un programa que permita calcular el promedio de N números enteros indicados por el usuario. Restricción: utilizar ciclo `while`, no utilizar el ciclo `for`.

## Ejercicio 2

Desarrollar un programa que permita calcular el porcentaje de alumnos aprobados en un examen. La cantidad de alumnos es variable y debe ser indicada por el usuario al comenzar la ejecución del programa. La nota de cada uno de los alumnos debe ser ingresada por el usuario y se considera aprobado aquel examen cuya nota sea mayor o igual a 6.

## Ejercicio 3

Desarrollar un programa que permita calcular el porcentaje de alumnos aprobados en un examen. La cantidad de alumnos no se sabe y no es indicada por el usuario. La nota de cada uno de los alumnos debe ser ingresada por el usuario y se considera aprobado aquel examen cuya nota sea mayor o igual a 6. La entrada de los datos debe cortarse cuando el usuario ingrese una nota negativa. Restricción: utilizar ciclo `while` para el ingreso de los datos.

## Ejercicio 4

Desarrollar un programa que permita calcular el porcentaje de alumnos aprobados en un examen. La cantidad de alumnos no se sabe y no es indicada por el usuario. La nota de cada uno de los alumnos debe ser ingresada por el usuario y se considera aprobado aquel examen cuya nota sea mayor o igual a 6. La entrada de los datos debe cortarse cuando el usuario ingrese una nota negativa. Restricción: utilizar ciclo `do while` para el ingreso de los datos.