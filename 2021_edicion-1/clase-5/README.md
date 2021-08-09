# Implementando problemas con arreglos unidimensionales

- **Instructor**: Germán Navarro (Github: _gmanavarro_, Discord: _Naga#2072_)
- **Lugar**: servidor de Discord de **programaConNosotros**
- **Fecha**: viernes 30 de julio, 2021

## Ejercicio 1

Desarrollar un programa que permita determinar el resultado del enfrentamiento entre dos ejércitos, y también que permita conocer cuál de los soldados de cada ejército hizo el aporte más significativo.

- Los dos ejércitos están conformados por un total de `N` soldados.
- La fuerza militar de un ejército está dada por la sumatoria de la fuerza militar de sus `N` soldados.
- La fuerza militar de cada de soldado debe ser un número natural, mayor a `0`. En caso de ingresar una fuera militar inválida, se debe indicar al usuario que el valor es inválido y pedirle que ingrese el valor nuevamente.
- Se considera a un ejército como el **ganador** si su fuerza militar es **mayor** a la del ejército rival. En el caso de que la fuerza militar de los **ejércitos** sea **igual**, el resultado del enfrentamiento es un **empate.**
- Se considera al soldado de un ejército como el más significativo en el enfrentamiento cuando su fuerza militar es **mayor** a la de todos los demás soldados de su ejército. En el caso de que existan 2 soldados o más que compartan el **mayor** valor de fuerza militar, se considera que **ninguno** es el soldado significativo.

## Ejercicio 2

Desarrollar un programa que permita determinar si un atleta puede finalizar una prueba de salto de obstáculos.

- Un atleta siempre inicia con una cantidad `X` de energía. Esta cantidad debe ser un número **natural**.
- En la prueba existen `N` obstáculos. Cada obstáculo tiene asociada una cantidad `Y` de energía que debe ser utilizada por el atleta para poder superarlo. Esta cantidad debe ser un número **natural**.
- El atleta supera un obstáculo cuando su cantidad de energía `X-Y` es **mayor** que 0.
- El atleta pierde `Y` de energía cada vez que supera un obstáculo.
- La prueba se considera **superada** cuando el atleta puede superar **todos** los obstáculos de la prueba. Caso contrario, la prueba se considera **fallida.**
- En caso de que la prueba se considere **fallida**, se debe mostrar hasta qué numero de obstáculo pudo llegar el atleta.
