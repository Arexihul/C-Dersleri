#include<stdio.h>

int main(){
	
	int i = 5;
	
	int *p = &i;
	
	printf("%p",p);
	printf("\n%u",p);
	printf("\n%d",*p);
	
	/*
	& de�i�kenin adres bilgisini verir.
	* adresteki de�eri verir
	*/
	
	return 0;
}
