#include <stdio.h>

int main(void) {

  // defino variables
  int j, k;
  int *ptr; //Es un operador de  des-referencia
  //Accede al contenido de memoria apuntada por el puntero 


  
  // asigno variables
  printf("Ingrese valor de J : ");
  
  scanf("%d", &j);

  printf("\nIngrese valor de k : ");
  
  scanf("%d", &k);

  ptr = &k;// el operado de referencia se usa para Re asignar valores 

  printf("\n");
  printf("j tiene el valor : %d y esta alojado enla direccion :%p \n", j, &j);
  printf("k tiene el valor : %d y esta alojado enla direccion :%p \n", k, &k);
  printf("ptr tiene el valor : %p y esta alojado enla direccion :%p \n", ptr,
         &ptr);
  //se usa el operador para acceder al valor de la variable 

  
  printf("el valor entero al que apunta ptr es : %d \n", *ptr); // se encuntra otro operador de  des-referencia
  //accede al valor que se encuentra en la dirreccion amacenada en ptr
  return 0;
}
