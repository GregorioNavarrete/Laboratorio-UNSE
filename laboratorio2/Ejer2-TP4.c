#include <stdio.h>
#include <math.h>//para usar la operacion potencia 

void LasPonetenciasDeN(int num);            /* declaración */

int main() {

	int num=0;
	//ingrese numero con la mascara 
	printf("ingrese numero : \n");
	scanf("%d", &num);
	
	printf("\n");	
	LasPonetenciasDeN(num);
	
	return 0; 
}



void LasPonetenciasDeN(int num) { /* definición de la función */
	int aux=2;
	for(int i=1;i<=num;i++){	
		aux=pow(aux,i);

		printf(" %d-",aux);
		aux=2;
	}
}
