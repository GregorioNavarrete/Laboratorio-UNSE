#include <stdio.h>
#include <string.h>  // Necesario para la función strlen

#include <stdio.h>

	struct alumno {
		char no[25];//nombre 
		char ap[10];//apellido
		int edad;//edad
		int anio;//anio
		int nota[4];//nota
		float prom;//promedio
	
	};

int main() {

	int i;
	//struct alumno R1={"Victor", "Perez", 20, 2020};
	struct alumno R1[5];
	
	//ingresar los datos de 5 alumnos   lo probamos con 2 
	for (i=0; i < 5; i++) {
		printf ("Ingrese el alumno numero %d: \n",i+1);
		
		printf ("\nIngrese nombre: ");
		scanf("%s", &R1[i].no);
		
		printf ("\nIngrese apellido: ");
		scanf("%s", &R1[i].ap);		
		
		//printf("%s %s",&R1.no,&R1.ap);
		
		printf ("\nIngrese edad: ");
		scanf("%d", &R1[i].edad);
		
		printf ("\nIngrese anio: ");
		scanf("%d", &R1[i].anio);	
		
		int acum=0;
		//un for para agregar las 4 notas al mismo alumno
		for(int j=0;j<4;j++){
			printf ("\nIngrese nota: ");
			scanf("%d", &R1[i].nota[j]);
			acum = acum + R1[i].nota[j]; //es ir si sumando las notas 		
		}

		R1[i].prom= (float) acum / 4;//ingreso el promedio y lo ingreso ! 
		

	}
	
	for (int p=0;p<5;p++){
		//Para mostrar 
		printf ("\n El aluno 1 tiene \n");
		printf ("\n nombre: %s",R1[p].no);
		printf ("\n apellido: %s",R1[p].ap);
		printf ("\n edad: %d",R1[p].edad);
		printf ("\n anio: %d",R1[p].anio);
		
		for(int z=0;z<4;z++){
			printf ("\n nota: %d",R1[p].nota[z]);	
		}
	
		printf ("\n Promedio: %f",R1[p].prom);
			
	}


return (0);
}
