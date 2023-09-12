#include <stdio.h>
#include <string.h> // Necesario para la función strlen

struct legajo {
  char nombre[15];
  char apellido[15];
  int edad;
  int nLeg;
};

int main() {
  int max = 0;
  printf("ingrese la cnatidad de legajos que quiere ingresar : ");
  scanf("%d", &max);
  int i = 0;
  struct legajo leg[max];
  for (i = 0; i < max; i++) {
    printf("\nEscriba el Nombre %d:", i + 1);
    scanf("%s", leg[i].nombre);
    fflush(stdin);
    printf("\nEscriba el Apellido %d: ", i + 1);
    scanf("\n%s", leg[i].apellido);
    fflush(stdin);
    printf("\nEscriba la Edad de %d:", i + 1);
    scanf("\n%d", &leg[i].edad);
    fflush(stdin);
    printf("\nEscriba la numero de legajo %d:", i + 1);
    scanf("\n%d", &leg[i].nLeg);
    fflush(stdin);
  }

  printf("\n\nLos registros de Legajos que se introdujeron son: \n\n");
  for (i = 0; i < max; i++) {
    printf("%s", leg[i].nombre);
    printf("\t%s", leg[i].apellido);
    printf("\t%d", leg[i].edad);
    printf("\t%d", leg[i].nLeg);
    printf("\n");
  }
  return 0;
}
