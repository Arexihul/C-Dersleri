# include<stdio.h>

int main(){
	
	/*
		-x, x+y*z, (x/7)*y, (a%b)-(x*a + 1), 3 + 4*7 gibi ifadeler aritmetiik ifadelerdir.
	
	��lem S�ras�:
	tekli operat�rler: (+) (-) (-x, +x) 1.�ncelik. Kendi aralarnda sa�dan sola
	ikili operat�rler: *, /, % 2.�ncelik. Kendi aralar�nda soldan sa�a
	ikili operat�rler: +, - 3.�ncelik. Kendi aralar�nda soldan sa�a
	
	Parantez i�leri her zaman ilk planda yap�l�r.(Matematik ile ayn�)
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
