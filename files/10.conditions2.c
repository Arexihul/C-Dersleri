# include<stdio.h>

/*
B�t�n 0 olmayan say�lar(1,132,2500 vs.) true de�er say�l�r.
0 ise false de�erdir

Mant�ksal Operat�rler
	>
	<
	>=
	<=
	==
	!=
	
Mant�ksal Ba�la�lar
	&& --> and
	|| --> or
	! --> not
	
�artl� C�mleler

a = x > y ? x: y;
	x b�y�k y ise(?) x, de�ilse y

*/

int main(){
	
	int a,b=20,c=30;
	
	a = b<c ? b:c;
	printf("%d",a);
	
	return 0;
}
