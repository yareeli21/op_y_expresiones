#include<stdio.h>

int main(){

  int x;
  printf("Digite un numero: ");
  scanf("%d");

  printf("%d %c", x, x%5 ? '\t':'\n');



	return 0;
}