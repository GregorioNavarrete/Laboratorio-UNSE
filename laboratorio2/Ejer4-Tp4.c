#include <stdio.h>
#include <string.h>//para cortar strings

//declaro las funciones 
void mostrarCaracteres(char cadena[]);
void mostrarPalabras(char cadena[]);

int main() {
    char cadena[100];

    printf("Ingrese una cadena: ");
    gets(cadena);

    printf("Caracteres de la cadena:\n");
    mostrarCaracteres(cadena);

    // Llamar a la función para mostrar palabras
    printf("\nPalabras de la cadena:\n");
    mostrarPalabras(cadena);

    return 0;
}

void mostrarCaracteres(char cadena[]) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud; i++) {
        printf("%c\n", cadena[i]);
    }
}

void mostrarPalabras(char cadena[]) {
  /*
   dividir la cadena en palabras. strtok toma dos argumentos: la cadena a dividir y el caracter que las separa
  */
    char *token = strtok(cadena, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}
