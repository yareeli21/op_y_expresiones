#include"stdio.h"

int main(){

  int edad, MayorDeEdad, juvenil;

  printf("Digite su edad: ");
  scanf("%d", &edad);

  MayorDeEdad= (edad>18);
   // estamos haciendo una comparación sin if para demostrar los valores booleanos
  juvenil= (edad>15) && (edad<=18);

  printf("%d\n", MayorDeEdad);
  printf("%d",juvenil);


	return 0;
}