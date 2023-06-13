#include"stdio.h"

int main(){

 int rango, es_letra, n, car;

 puts("Ingrese un numero: ");
 scanf("%d",&n);
 
 puts("Ingrese una letra: ");
scanf("%c",&car);

 rango =(n>-100) && (n<100);
 es_letra=(('A' <= car) && (car <= 'Z')) || (('a'<= car) && (car <= 'z'));

 printf("%d\n",rango);
 printf("%d",es_letra);


	return 0;
}