#include <stdio.h>
#include <string.h>  // Necesario para la función strlen

int main() {
    char cadena[20];  // Definir una cadena para almacenar la entrada.
    
    // Leer la cadena desde la entrada estándar.
    printf("Ingrese un número real (con tres posiciones enteras y dos decimales): ");
    scanf("%s", cadena);

    int longitud = strlen(cadena);
    int punto_posicion = 0;  // Inicializar 

    // Encontrar la posición del punto decimal en la cadena
    char *ptr = cadena;  // Declarar un puntero a char y apuntarlo al inicio de la cadena

    for (int i = 0; i < longitud; i++) {
        if (*ptr == '.') {
            punto_posicion = i;
            break;  // Encontramos el punto, salimos del bucle
        }
        ptr++;  // Mover el puntero al siguiente carácter
    }

    // Verificar si se encontró el punto decimal y eliminarlo si es necesario
    if (punto_posicion ==3) {
        ptr = cadena + punto_posicion;  // Apuntar al punto decimal
        while (*ptr != '\0') {
            *ptr = *(ptr + 1);  // Mover todos los caracteres un lugar a la izquierda
            ptr++;
        }
    } else {
        printf("Error: No se encontró el punto decimal en la cadena.\n");
        return 1;  // Salir del programa con código de error
    }

    // Convertir la cadena resultante a un número entero
    int numero = atoi(cadena);

    // Multiplicar el número por 2
    numero *= 2;

    // Mostrar el resultado
    printf("El número ingresado multiplicado por 2 es: %d\n", numero);
  
    return 0;
}
