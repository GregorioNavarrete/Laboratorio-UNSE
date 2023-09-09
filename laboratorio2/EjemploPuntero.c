#include <stdio.h>

int main() {
  int arr[]={1,23,17,4,-5,100};
  int *ptr;
  int i;

   
  ptr=&arr[0];//apuntamos al primer elemento del arreglo

  printf("\n");

  for(i=0;i<6;i++){
    
    printf("arr[%d] = %d \t\t",i,arr[i]);// recorre los Arreglo
    printf("ptr + %d = %d \n",i,*ptr);//recorrer el arr por medio del PTR

    ptr++;
  }

  
  return 0;
}
