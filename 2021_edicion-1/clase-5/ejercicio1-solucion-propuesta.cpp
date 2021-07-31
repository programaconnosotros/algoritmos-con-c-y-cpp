#include "stdio.h"
#include "stdlib.h"
#include "libreria/pcn.h"

void determinarEjercitoGanador(float primerEjercito[], float segundoEjercito[], int cantidadDeSoldados)
{
  float fuerzaMilitarDelPrimerEjercito = calcularSumaDeElementos(primerEjercito, cantidadDeSoldados);
  float fuerzaMilitarDelSegundoEjercito = calcularSumaDeElementos(segundoEjercito, cantidadDeSoldados);

  if (fuerzaMilitarDelPrimerEjercito > fuerzaMilitarDelSegundoEjercito)
  {
    printf("El primer ejercito es el ganador del enfrentamiento.\n");
  }
  else if (fuerzaMilitarDelPrimerEjercito < fuerzaMilitarDelSegundoEjercito)
  {
    printf("El segundo ejercito es el ganador del enfrentamiento.\n");
  }
  else
    printf("El enfrentamiento resultó en un empate.\n");
}

void buscarSoldadoMasSignificativo(float ejercito[], int cantidadDeSoldados)
{
  int posicionDelSoldadoMasSignificativo;
  float mayorFuerzaMilitarEncontrada = 0;
  bool mayorFuerzaMilitarEstaRepetida = false;

  for (int posicionDelSoldado = 0; posicionDelSoldado < cantidadDeSoldados; posicionDelSoldado++)
  {
    float fuerzaMilitarDeSoldado = ejercito[posicionDelSoldado];
    if (fuerzaMilitarDeSoldado == mayorFuerzaMilitarEncontrada)
    {
      mayorFuerzaMilitarEstaRepetida = true;
    }
    else if (fuerzaMilitarDeSoldado > mayorFuerzaMilitarEncontrada)
    {
      mayorFuerzaMilitarEstaRepetida = false;
      mayorFuerzaMilitarEncontrada = fuerzaMilitarDeSoldado;
      posicionDelSoldadoMasSignificativo = posicionDelSoldado;
    }
  }

  if (mayorFuerzaMilitarEstaRepetida)
  {
    printf("Ningun soldado es el mas significativo.\n");
    return;
  }

  printf("El soldado en la posicion %d.\n", posicionDelSoldadoMasSignificativo + 1);
}

int main()
{
  system("cls");

  float cantidadDeSoldados = leerNumeroEnteroPositivo("Ingrese la cantidad de soldados: ");
  validarNumeroEntero(cantidadDeSoldados);

  float primerEjercito[99];
  cargarArreglo(primerEjercito, cantidadDeSoldados, "Ingrese la fuerza militar del soldado del primer ejercito: ");

  system("cls");
  mostrarArreglo(primerEjercito, cantidadDeSoldados, "Soldado %d: %.f\n");
  system("pause");

  float segundoEjercito[99];
  cargarArreglo(segundoEjercito, cantidadDeSoldados, "Ingrese la fuerza militar del soldado del segundo ejercito: ");

  system("cls");
  mostrarArreglo(segundoEjercito, cantidadDeSoldados, "Soldado %d: %.f\n");
  system("pause");

  printf("Resultados:\n");
  determinarEjercitoGanador(primerEjercito, segundoEjercito, cantidadDeSoldados);

  printf("El soldado significativo del primer ejercito es: ");
  buscarSoldadoMasSignificativo(primerEjercito, cantidadDeSoldados);

  printf("El soldado significativo del segundo ejercito es: ");
  buscarSoldadoMasSignificativo(segundoEjercito, cantidadDeSoldados);

  return 0;
}
