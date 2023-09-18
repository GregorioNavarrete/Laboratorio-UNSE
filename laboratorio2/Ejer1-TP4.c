#include <stdio.h>

void calculaConjetura(int num);            /* declaración */

int main() {

	int num=0;
	//ingrese numero con la mascara 
	printf("ingrese numero : \n");
	scanf("%d", &num);
	
	printf("\n");	
	calculaConjetura(num);
	
	return 0; 
}



void calculaConjetura(int num) { /* definición de la función */
    while (num != 1) {
        if (num % 2 == 0) {
            // si es par
            num = num / 2;
        } else {
            // si es impar
            num = (num * 3) + 1;
        }
        
        printf(" %d -", num);
    }
}
