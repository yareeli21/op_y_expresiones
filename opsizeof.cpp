#include"stdio.h"

int main(){

  int a,b, k;

  a=5;
  b=76;
  k=6;

  printf("La variable k es de %d bytes\n", sizeof(k));
  printf("La expresion a + b ocupa %d bytes", sizeof(a + b));

	return 0;
}