#include"stdio.h"

int main(){

  int n=8;
  int m;
  printf("n = %d\n",--n);
  printf("m=%d\n",++n);
  printf("n=%d\n",++n);

   puts("--------------");

  int n1=8;
  int m1;
  printf("n1 = %d\n",n1--);
  printf("m1= %d\n",n1++);
  printf("n1=%d\n",n1++);

  /*Test de operadores*/

  int m2=45, n2=75;
//como están como prefijos se efectua antes la operación
  printf("m = %d, n = %d",m2,n2);
  ++m2;
  --n2;
  //como están como sufijos se efectua después la operación
  printf("m = %d, n = %d",m2,n2);
  m2++;
  n2--;
  printf(" m = %d, n = %d\n",m2,n2);

  //Diferencias entre operadores de preincremento y postincremento
  puts("--------------------------");
  int x=99, y;
  y=++x;
  printf("x=%d, y=%d\n",x,y);
  y=x++;
  printf("x=%d, y=%d\n",x,y);
  printf("x=%d\n",x++);
  printf("x=%d\n",++x);

  //orden de evalución no predecible en expresiones
  puts("----------------------------");

  int s=5, t;
  t=++s * --s;
  printf("s=%d, t=%d\n",s,t);
  printf("%d \t %d \t %d\n",++s,++s,++s);
	return 0;
}