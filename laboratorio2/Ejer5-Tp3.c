#include <stdio.h>
#include <math.h>

struct punto {
  int x;
  int y;
};

int main() {
  struct punto P1[20];
  int aux = 0;
  printf("(1)----Dados dos puntos calcule la distancia entre ellos\n");
  printf("(2)----Salir\n");
  printf("Ingrese la opción: ");
  scanf("%d", &aux);

  int max = 0;
  while (aux == 1 && max < 20) { // Agregamos una limitación al número de cálculos
    for (int i = 0; i < 2; i++) {
      printf("\nIngrese la coordenada x del punto %d: ", i + 1);
      scanf("%d", &P1[i].x);
      printf("Ingrese la coordenada y del punto %d: ", i + 1);
      scanf("%d", &P1[i].y);
    }

    // Calcular la distancia entre los puntos
    double numero1 = P1[0].x - P1[1].x;
    double numero2 = P1[0].y - P1[1].y;
    double raiz = sqrt(pow(numero1, 2) + pow(numero2, 2));
    printf("\nDistancia %d: %.2lf\n", max + 1, raiz);

    max++;

    // Mostrar el menú de nuevo
    printf("\n(1)----Dados dos puntos calcule la distancia entre ellos\n");
    printf("(2)----Salir\n");
    printf("Ingrese la opción: ");
    scanf("%d", &aux);
  }

  return 0;
}
