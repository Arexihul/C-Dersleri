#include<stdio.h>

int main(){
	
	int i = 5;
	
	int *p = &i;
	
	printf("%p",p);
	printf("\n%u",p);
	printf("\n%d",*p);
	
	/*
	& değişkenin adres bilgisini verir.
	* adresteki değeri verir
	*/
	
	return 0;
}
