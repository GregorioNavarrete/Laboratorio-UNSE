#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

int main() {
    struct producto productos[3]; // Arreglo de estructuras para 3 productos

    // Ingresar datos para cada producto
    for (int i = 0; i < 3; i++) {
        printf("Ingrese el código del producto %d: ", i + 1);
        scanf("%d", &productos[i].codigo);
        printf("Ingrese la descripción del producto %d: ", i + 1);
        scanf(" %s", productos[i].descripcion); 
        printf("Ingrese el precio del producto %d: ", i + 1);
        scanf("%f", &productos[i].precio);

        printf("\n");
    }

    // Mostrar la información en columnas
    printf("\n%-10s%-20s%-10s\n", "Código", "Descripción", "Precio");
    for (int i = 0; i < 3; i++) {
        printf("%-10d%-20s%-10.2f\n", productos[i].codigo, productos[i].descripcion, productos[i].precio);
    }

    return 0;
}
