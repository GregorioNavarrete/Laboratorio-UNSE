#include <stdio.h>
#include <stdbool.h>

struct Empleado {
    int legajo;
    char nombre[50];
};

void leerEmpleado(struct Empleado *empleado);
int controlarLegajo(int legajo, int valorIngresado);
void mostrarEmpleado(struct Empleado emp);

int main() {
    struct Empleado empleados[2];
    int opcion, valorIngresado;

    do {
        printf("Taller 1: Empleados\n");
        printf("1- Ingresar empleados\n");
        printf("2- Mostrar todos\n");
        printf("3- Mostrar los legajos múltiplos\n");
        printf("4- Mostrar los legajos no múltiplos\n");
        printf("0- Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                for (int i = 0; i < 2; i++) {
                    printf("\nIngrese información del empleado %d:\n", i + 1);
                    leerEmpleado(&empleados[i]);
                }
                break;
            case 2:
                printf("\nListado de todos los empleados:\n");
                printf("LEGAJO\tNOMBRE\n");
                for (int i = 0; i < 2; i++) {
                    mostrarEmpleado(empleados[i]);
                }
                break;
            case 3:
                printf("\nIngrese un número para verificar legajos múltiplos: ");
                scanf("%d", &valorIngresado);
                printf("\nListado de empleados con legajos múltiplos de %d:\n", valorIngresado);
                printf("LEGAJO\tNOMBRE\n");
                for (int i = 0; i < 2; i++) {
                    if (controlarLegajo(empleados[i].legajo, valorIngresado) == 1 ) {
                        mostrarEmpleado(empleados[i]);
                    }
                }
                break;
            case 4:
                printf("\nIngrese un número para verificar legajos no múltiplos: ");
                scanf("%d", &valorIngresado);
                printf("\nListado de empleados con legajos no múltiplos de %d:\n", valorIngresado);
                printf("LEGAJO\tNOMBRE\n");
                for (int i = 0; i < 2; i++) {
                    if (controlarLegajo(empleados[i].legajo, valorIngresado) ==0) {
                        mostrarEmpleado(empleados[i]);
                    }
                }
                break;
            case 0:
                printf("\nSaliendo del programa.\n");
                break;
            default:
                printf("\nOpción no válida. Por favor, ingrese una opción válida.\n");
                break;
        }

    } while (opcion != 0); //si es true regresa

    return 0;
}

void leerEmpleado(struct Empleado *empleado) {
	/*
	a) void leerEmpleado(int *legajo, char *nombre);
Objetivo: Solicita los datos relativos a un empleado y verifica que sean válidos.

no hace lo que me pide 
	*/
  
    printf("Ingrese el legajo: ");
    scanf("%d", &empleado->legajo); 
    // la flecha es para asignar el valor a "el campo legajo de empleado"
  
    

    printf("Ingrese el nombre del empleado: ");
    scanf("%s", empleado->nombre);//por ser char no usa & ???
}
int controlarLegajo(int legajo, int valorIngresado){
    //lo hago una funcion para poder usarlo 2 veces 
  
    int aux=0;//por defecto no es multiplo
  
    if((legajo % valorIngresado) == 0){
      aux=1;
    }
    return aux;
}

void mostrarEmpleado(struct Empleado emp){
  // tengo que decir que el dato es de tipo registro empleado
    printf("%d\t%s\n", emp.legajo, emp.nombre);
}




