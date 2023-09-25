#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Alumnos{
	char 	nom[20];
	char	ape[20];
	int		dni;
	int		noCurso;
	float	notas[3];
	};



void mostraBuenPromedio(int n,struct Alumnos *al); //definir 
int CantidadBajoPromedio(int n,struct Alumnos *alum);

int main(int argc, char *argv[]) {
	
	/*
	ingrese la cantidad de alumnos 
	int n=0;
	scanf("%d",n);
	*/
	struct Alumnos alum[3]={"grego","nava",4142,4,1,2,3,
						"pep","solis",999,1,5,5,5,
						"leo","mesi",33,1,7,7,7	
							};
							
	/*
	ingrese los elementos al registro
	
	for(i=0;i<n;i++){
		//ingrese nombre 
		scanf("%s",alum[i].nom);
		//ingrese notas 
		for(i=0;j<3:i++){
			scanf("%5.2f",&alum[i].notas[j]);
		}
		
		
		//lo mismo para los otros campos 
	}
	
	*/						
								
							
	
//	printf("%s \t %s \t %d \t %d \t %5.2f %5.2f %5.2f  \n",alum[0].nom,alum[0].ape,alum[0].dni,alum[0].noCurso,alum[0].notas[0],alum[0].notas[1],alum[0].notas[2]);
//	printf("%s \t %s \t %d \t %d \t %5.2f %5.2f %5.2f",alum[1].nom,alum[1].ape,alum[1].dni,alum[1].noCurso,alum[1].notas[0],alum[1].notas[1],alum[1].notas[2]);
	
	//el 2 es la cantidad de alumnos 
	mostraBuenPromedio(3,alum);
	
	int s=0;
	
	s=CantidadBajoPromedio(3,alum);
	
	printf("%d",s);
	return 0;
}
/*
parametros de entrada y de salida 
definicionint

*/
void mostraBuenPromedio( int n,struct Alumnos *al){
	
	struct Alumnos *P=al; //apunto a la primera posicion ,  !!!Cuidado con el estruct
	
	
	for(int i=0;i<3;i++){
		float prom=(float)( (P+i)->notas[0] +(P+i)->notas[1]+(P+i)->notas[2])/3;
		
	//	printf("%5.2f  \n",prom);
		
		if(prom>=7){
			
			//llamo a la funcion que imprme la tabla	
		}
		
	}
}



int CantidadBajoPromedio(int n,struct Alumnos *alum){
	int suma=0;
	//struct Alumnos *P=alum;    ! no lo uso xq la referencia ya es como un puntero !! 
	
	for(int i=0;i<n;i++){
		float prom=(float)( (alum+i)->notas[0] +(alum+i)->notas[1]+(alum+i)->notas[2])/3;
		
		if(prom<5){
			suma=suma+1;	
		}
	}
	
	
	return suma ;
}







