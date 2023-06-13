#include<stdio.h>
//la misma variable se puede manipular varias veces dentro del mismo programa
int main(){
	
  int n=9;
  int m;

  m = n++;
  printf("n = %d", n--);

  m = ++n;
  printf("n = %d", --n);

	return 0;
}