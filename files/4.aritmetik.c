# include<stdio.h>

int main(){
	
	/*
		-x, x+y*z, (x/7)*y, (a%b)-(x*a + 1), 3 + 4*7 gibi ifadeler aritmetiik ifadelerdir.
	
	Ýþlem Sýrasý:
	tekli operatörler: (+) (-) (-x, +x) 1.öncelik. Kendi aralarnda saðdan sola
	ikili operatörler: *, /, % 2.öncelik. Kendi aralarýnda soldan saða
	ikili operatörler: +, - 3.öncelik. Kendi aralarýnda soldan saða
	
	Parantez içleri her zaman ilk planda yapýlýr.(Matematik ile ayný)
	*/
	
	printf("%d\n",2-3+4);
	printf("%d\n",2*3-4);
	printf("%f\n",2-3/4.);
	printf("%d\n",2+3%4);	
	printf("%f\n",2/3.*4);	
	printf("%f\n",2%3/4.);	
	printf("%d\n",-2+3);	
	printf("%d\n",2*-3);	
	printf("%d\n",-2*-3);
	printf("%d\n",(2+3)%4);
	
	return 0;
}
