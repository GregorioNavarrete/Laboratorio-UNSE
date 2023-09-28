#include <stdio.h>
#include <stdbool.h>

struct Empleado {
    int legajo;
    char nombre[50];
};

void leerEmpleado(int *legajo, char *nombre);
int controlarLegajo(int legajo, int valorIngresado);
void mostrarEmpleado(struct Empleado emp);

int main() {
    struct Empleado empleados[2];
    int opcion, valorIngresado;

    do {
    	//muetras el menu 
        printf("Taller 1: Empleados\n");
        printf("1- Ingresar empleados\n");
        printf("2- Mostrar todos\n");
        printf("3- Mostrar los legajos multiplos\n");
        printf("4- Mostrar los legajos no multiplos\n");
        printf("0- Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);
        printf("\n");
		printf("\n");
		printf("\n");
		
        switch (opcion) {
            case 1:
                for (int i = 0; i < 2; i++) {
                    printf("\nIngrese informacion del empleado %d:\n", i + 1);
                   
                    leerEmpleado(&empleados[i].legajo,empleados[i].nombre);

                }
                printf("\n");
                printf("\n");
                printf("\n");
                break;
            case 2:
                printf("\nListado de todos los empleados:\n");
                printf("LEGAJO\tNOMBRE\n");
                for (int i = 0; i < 2; i++) {
                    mostrarEmpleado(empleados[i]);
                }
                printf("\n");
                printf("\n");
                printf("\n");
                break;
            case 3:
                printf("\nIngrese un numero para verificar legajos multiplos: ");
                scanf("%d", &valorIngresado);
                printf("\nListado de empleados con legajos multiplos de %d:\n", valorIngresado);
                printf("LEGAJO\tNOMBRE\n");
                for (int i = 0; i < 2; i++) {
                    if (controlarLegajo(empleados[i].legajo, valorIngresado) == 1 ) {
                        mostrarEmpleado(empleados[i]);
                    }
                }
                
                printf("\n");
                printf("\n");
                printf("\n");
                break;
            case 4:
                printf("\nIngrese un numero para verificar legajos no multiplos: ");
                scanf("%d", &valorIngresado);
                printf("\nListado de empleados con legajos no multiplos de %d:\n", valorIngresado);
                printf("LEGAJO\tNOMBRE\n");
                for (int i = 0; i < 2; i++) {
                    if (controlarLegajo(empleados[i].legajo, valorIngresado) ==0) {
                        mostrarEmpleado(empleados[i]);
                    }
                }
                
                printf("\n");
                printf("\n");
                printf("\n");
                break;
            case 0:
                printf("\nSaliendo del programa.\n");
                printf("\n");
                printf("\n");
                printf("\n");
                break;
            default:
                printf("\nOpcion no valida. Por favor, ingrese una opción valida.\n");
                 printf("\n");
                printf("\n");
                printf("\n");
                break;
        }

    } while (opcion != 0); //si es true regresa

    return 0;
}




void leerEmpleado(int *legajo, char *nombre) {
    /*
    Descripción: Solicita los datos relativos a un empleado y verifica que sean válidos.

    Variables de entrada y salida:
    - legajo: Puntero a entero donde se almacenará el legajo válido.
    - nombre: Puntero a un arreglo de caracteres donde se almacenará el nombre del empleado.
    */

    int aux = 0;

    do {
        printf("Ingrese el legajo entre 1000 y 9999: ");
        scanf("%d", &aux);

        // Leer el primer caracter del nombre para verificar si es una letra, y no ingresar solo numeros o simbolos 
        printf("Ingrese el nombre del empleado: ");
        scanf("%s", nombre);
        
        // Verificar si el legajo y el primer carácter del nombre cumplen con los criterios.
        if (aux >= 1000 && aux <= 9999 && ((nombre[0] >= 'A' && nombre[0] <= 'Z') || (nombre[0] >= 'a' && nombre[0] <= 'z'))) {
            *legajo = aux; // Asigna el valor al campo, con puntero.
        } else {
            printf("\n----------->!!! Legajo fuera del rango o nombre no valido. Ingrese valores correctos.\n");
        }

    } while ((aux < 1000 || aux > 9999) || !((nombre[0] >= 'A' && nombre[0] <= 'Z') || (nombre[0] >= 'a' && nombre[0] <= 'z')));
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
	/*
	Descripcion:: muestra los datos de un solo empleado. Se utiliza para generar el listado encolumnado.
	Variables de entra y salida : un registro de entrada 

	*/
  // tengo que decir que el dato es de tipo registro empleado
    printf("%d\t%s\n", emp.legajo, emp.nombre);
}



