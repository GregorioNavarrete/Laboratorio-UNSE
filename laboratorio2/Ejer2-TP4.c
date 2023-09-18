#include <stdio.h>

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
	for(int i=0;i<num;i++){
	
		for(int j=0;j<i;j++){
			aux=2*aux;
		}
		printf(" %d-",aux);
		aux=2;	
	}
	if(num==0){
		printf(" 1-");
	}
	if(num<0){
		printf("\n El numero debe ser positivo ");
	}
}
