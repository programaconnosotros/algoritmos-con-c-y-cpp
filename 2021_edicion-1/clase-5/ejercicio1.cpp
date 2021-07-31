#include "stdio.h"
#include "stdlib.h"

float leerNumeroEntero(char mensaje[])
{
  float numero;
  printf("%s", mensaje);
  scanf("%f", &numero);

  while (numero <= 0)
  {
    printf("La fuerza militar ingresada es invalida.\n");
    printf("%s", mensaje);
    scanf("%f", &numero);
  }

  return numero;
}

void cargarArreglo(float arreglo[], float cantidadDeElementos, char mensaje[])
{
  for (int indice = 0; indice < cantidadDeElementos; indice++)
  {
    arreglo[indice] = leerNumeroEntero(mensaje);
  }
}

float calcularFuerzaMilitar(float ejercito[], float cantidadDeSoldados)
{
  float fuerzaMilitarDelEjercito = 0;
  for (int numeroDeSoldado = 0; numeroDeSoldado < cantidadDeSoldados; numeroDeSoldado++)
  {
    fuerzaMilitarDelEjercito += ejercito[numeroDeSoldado];
  }

  return fuerzaMilitarDelEjercito;
}

void determinarResultadoDelEnfrentamiento(float primerEjercito[], float segundoEjercito[], float cantidadDeSoldados)
{

  float fuerzaMilitarDelPrimerEjercito = calcularFuerzaMilitar(primerEjercito, cantidadDeSoldados);

  float fuerzaMilitarDelSegundoEjercito = calcularFuerzaMilitar(segundoEjercito, cantidadDeSoldados);

  if (fuerzaMilitarDelPrimerEjercito > fuerzaMilitarDelSegundoEjercito)
  {
    printf("El ganador es el primer ejercito.\n");
  }
  else
  {
    if (fuerzaMilitarDelPrimerEjercito < fuerzaMilitarDelSegundoEjercito)
    {
      printf("El ganador es el segundo ejercito.\n");
    }
    else
    {
      printf("El resultado del enfrentamiento es un empate.\n");
    }
  }
}

void encontrarSoldadoSignificativo(float ejercito[], float cantidadDeSoldados)
{
  float mayorFuerzaMilitarEncontrada = 0;
  int numeroDelSoldadoConMayorFuerzaMilitar;
  bool mayorFuerzaMilitarEstaRepetida = false;

  for (int numeroDeSoldado = 0; numeroDeSoldado < cantidadDeSoldados; numeroDeSoldado++)
  {
    if (ejercito[numeroDeSoldado] > mayorFuerzaMilitarEncontrada)
    {
      mayorFuerzaMilitarEstaRepetida = false;
      mayorFuerzaMilitarEncontrada = ejercito[numeroDeSoldado];
      numeroDelSoldadoConMayorFuerzaMilitar = numeroDeSoldado;
    }
    else
    {
      if (ejercito[numeroDeSoldado] == mayorFuerzaMilitarEncontrada)
      {
        mayorFuerzaMilitarEstaRepetida = true;
      }
    }
  }

  if (mayorFuerzaMilitarEstaRepetida)
  {
    printf("No hay ningun soldado significativo.\n");
    return;
  }

  printf("El soldado signficativo es el soldado %d\n", numeroDelSoldadoConMayorFuerzaMilitar + 1);
}

int main()
{
  const int cantidadMaximaDeElementos = 99;
  float primerEjercito[cantidadMaximaDeElementos];

  float cantidadDeSoldados;
  printf("Ingrese la cantidad de soldados: ");
  scanf("%f", &cantidadDeSoldados);

  if (cantidadDeSoldados <= 0)
  {
    printf("Cantidad de soldados invalida.");
    exit(1);
  }

  cargarArreglo(primerEjercito, cantidadDeSoldados, "Ingrese la fuerza militar del soldado del primer ejercito: ");

  for (int numeroDeSoldado = 0; numeroDeSoldado < cantidadDeSoldados; numeroDeSoldado++)
  {
    printf("Soldado %d: %.2f\n", numeroDeSoldado + 1, primerEjercito[numeroDeSoldado]);
  }

  float segundoEjercito[cantidadMaximaDeElementos];

  cargarArreglo(segundoEjercito, cantidadDeSoldados, "Ingrese la fuerza militar del soldado del segundo ejercito: ");

  for (int numeroDeSoldado = 0; numeroDeSoldado < cantidadDeSoldados; numeroDeSoldado++)
  {
    printf("Soldado %d: %.2f\n", numeroDeSoldado + 1, segundoEjercito[numeroDeSoldado]);
  }

  determinarResultadoDelEnfrentamiento(primerEjercito, segundoEjercito, cantidadDeSoldados);

  printf("El soldado significativo del primer ejercito es: ");
  encontrarSoldadoSignificativo(primerEjercito, cantidadDeSoldados);

  printf("El soldado significativo del segundo ejercito es: ");
  encontrarSoldadoSignificativo(segundoEjercito, cantidadDeSoldados);

  return 0;
}