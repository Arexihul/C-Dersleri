# include<stdio.h>

/*
Bütün 0 olmayan sayýlar(1,132,2500 vs.) true deðer sayýlýr.
0 ise false deðerdir

Mantýksal Operatörler
	>
	<
	>=
	<=
	==
	!=
	
Mantýksal Baðlaçlar
	&& --> and
	|| --> or
	! --> not
	
Þartlý Cümleler

a = x > y ? x: y;
	x büyük y ise(?) x, deðilse y

*/

int main(){
	
	int a,b=20,c=30;
	
	a = b<c ? b:c;
	printf("%d",a);
	
	return 0;
}
