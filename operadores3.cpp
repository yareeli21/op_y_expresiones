#include<stdio.h>

int main(){

 int ventas, horas, prima, prima1;

 ventas= 70000;
 horas= 500;

 if((ventas>50000) || (horas<100)){
 	prima= 100000;
 }

 printf("El valor de prima es: %d",prima);

 if (!(ventas<2500)){ //esta también es una forma de decir que es mayor o igual 
 	prima1= 12500;
 }

 printf("El valor de la prima inicializa con = %d", prima1);
	return 0;
}