# Resolviendo problemas simples de forma conceptual

- **Instructor**: Agustín Sánchez (GitHub: *agustin-sanc*, Discord: *agustin_sz#4065*)
- **Lugar**: servidor de Discord de **programaConNosotros**
- **Fecha**: miércoles 21 de julio, 2021

## Ejercicio 1

Desarrollar un programa que permita calcular la suma de 2 números enteros indicados por el usuario.

- **Solución**
    - **Identificación del problema**
        - **Entrada**: 2 números enteros, indicados por el usuario
        - **Proceso**: sumar los 2 números enteros
        - **Salida**: resultado de la suma de los 2 números enteros
    - **Algoritmo**
        1. Pedirle al usuario el valor del primer número entero y almacenarlo en una variable
        2. Pedirle al usuario el valor del segundo número entero y almacenarlo en una variable
        3. Sumar los 2 números enteros indicados por el usuario
        4. Mostrar el resultado de la suma de los 2 números enteros

## Ejercicio 2

Desarrollar un programa que permita calcular la división de 2 números enteros indicados por el usuario. Tener en cuenta que no se puede dividir en 0.

- **Solución**
    - **Identificación del problema**
        - **Entrada**: los 2 números enteros indicados por el usuario
        - **Proceso**: calcular el resultado de la división si el denominador es distinto de cero
        - **Salida**: el resultado de la división de los 2 números enteros
    - **Algoritmo**
        1. Pedirle al usuario el valor del primer número entero y almacenarlo en una variable
        2. Pedirle al usuario el valor del segundo número entero y almacenarlo en una variable
        3. Verificar que el denominador es distinto de cero
            1. Si el denominador es igual a cero, mostrar mensaje de error al usuario y terminar la ejecución del programa
            2. Si el denominador es distinto de cero, calcular la división de los 2 números
        4. Mostrar el resultado de la división

## Ejercicio 3

Desarrollar un programa que permita calcular el promedio de 3 números enteros indicados por el usuario.

- **Solución**
    - **Identificación del problema**
        - **Entrada**: los 3 números enteros indicados por el usuario
        - **Proceso**: sumar los 3 números y dividirlos en 3
        - **Salida**: el promedio de los 3 números enteros
    - **Algoritmo**
        1. Pedirle al usuario el valor del primer número entero y almacenarlo en una variable
        2. Pedirle al usuario el valor del segundo número entero y almacenarlo en una variable
        3. Pedirle al usuario el valor del tercer número entero y almacenarlo en una variable
        4. Calcular la suma de los 3 números enteros
        5. Dividir la suma de los 3 números enteros en 3
        6. Mostrar el resultado del promedio de los 3 números enteros

## Ejercicio 4

Desarrollar un programa que permita calcular el promedio de N números enteros indicados por el usuario.

- **Solución**
    - **Identificación del problema**
        - **Entrada**
            - Cantidad de números enteros a promediar (tiene que ser mayor a 0)
            - Números enteros a promediar (puede ser cualquier número entero)
        - **Proceso**: sumar todos los números indicados por el usuario y dividirlo en la cantidad de números enteros a promediar, si la cantidad de números enteros a promediar es un número positivo mayor a 0
        - **Salida**: promedio de los números enteros
    - **Algoritmo**
        1. Pedirle al usuario la cantidad de números enteros que desea promediar
        2. Comprobar que la cantidad de números enteros a promediar sea un número entero positivo mayor a 0. En caso de no serlo, mostrar el error al usuario y finalizar la ejecución del programa
        3. Pedirle al usuario que nos diga cada uno de los números enteros que desea promediar, en relación a la cantidad de números enteros a promediar que se indicó en el paso 1
        4. Sumar los números enteros ingresados por el usuario
        5. Dividir la suma en la cantidad de números enteros (indicada en el paso 1)
        6. Mostrar el resultado del promedio

## Ejercicio 5

Desarrollar un programa que permita calcular el porcentaje de alumnos aprobados en un examen. La nota de cada uno de los 5 alumnos debe ser ingresada por el usuario. Se considera aprobado aquel examen cuya nota sea mayor o igual a 6.

- **Solución**
    - **Identificación del problema**
        - **Entrada**: nota del examen de cada uno de los alumnos
        - **Proceso**
            1. Contar la cantidad de alumnos aprobados
            2. Calcular el porcentaje de alumnos aprobados
        - **Salida**: porcentaje de alumnos aprobados
    - **Algoritmo**
        1. Pedirle al usuario cada una de las notas y validar que estén dentro del rango 0 a 10
        2. Inicializar el contador de alumnos aprobados en 0
        3. Para cada nota, comprobar si es mayor o igual a 6
            1. Si es así, incrementar el contador de alumnos aprobados en 1
            2. Si no es así, pasar a la comprobación de la siguiente nota (si es que queda alguna)
        4. Calcular el porcentaje de alumnos aprobados

            $$porcentaje = \frac{cantidad \cdot 100}{5}$$

        5. Mostrar el resultado del porcentaje de alumnos aprobados