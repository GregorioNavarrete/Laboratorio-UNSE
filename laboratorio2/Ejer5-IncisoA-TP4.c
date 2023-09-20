#include <stdio.h>

// Declaraciones de las funciones 
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
float division(int a, int b);

int main() {
    int opcion, num1, num2;

    printf("Calculadora Simple\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Seleccione una operacionb: ");
    scanf("%d", &opcion);

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    switch (opcion) {
        case 1:
            printf("Resultado: %d\n", suma(num1, num2));
            break;
        case 2:
            printf("Resultado: %d\n", resta(num1, num2));
            break;
        case 3:
            printf("Resultado: %d\n", multiplicacion(num1, num2));
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado: %.2f\n", division(num1, num2));
            } else {
                printf("Error: Division por cero\n");
            }
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return (float)a / b;//fuerso el float, por si me da fraccion 
}
