#include"stdio.h"

int main(){

  int n, m;

  n=6;
  m=10;

  printf("%d \n",n >=0 ? 1 : -1);
  printf("%d",m >=n ? m : n);

 
	return 0;
}