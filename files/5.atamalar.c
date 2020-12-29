# include<stdio.h>

int main() {
	
	/*
	
	ATAMALAR, ARTIRMA AZALTMA ��LEMLER�
	
	degisken(variable) = ifade(expression)
	
	int x = 15;
	int y = 14;
	x = y;  (x => 14)
	y = x;  (y => 14)
	
	int a = 6;
	int b = 7;
	a=b; (a => 7)
	b = a+1; (b => 8)

	x = x+1; 
	Atama durumunda ilk ba�ta sa� taraftaki k�s�m hesaplan�r, sonra atama yap�l�r.
	
	x+1 = 2; (Bu t�r ifadeler C'de ge�erli de�ildir. Sol taraftaki de�er saf bir de�i�ken olmal�. x gibi, y gibi)
	
	Art�rma, Azaltma ��lemleri
	
	i = i+1; 
	Bunun e�iti ayn� zamanda i += 1 ( i = i+1 ile ayn� �ey) (de�i�ken i�lem= ifade)
	
	C'de de�i�keni 1 art�rman�n pratik bir yolu var.
	postfix: i++;
	prefix: ++i;
	Aras�ndaki fark:
	postfix:
	int i = 4;
	print("%d",i++); --> ekrana 4 de�erini bast�r�r ��nk� postfix halinde i'nin art�rmadan �nceki de�erini(4) kullan�yor bir sonraki sat�rda art�r�yor.
	int i = 4;
	print("%d",++i); --> ekrana 5 de�erini bast�r�r ��nk� prefix halinde i'nin artm�� de�erini(5) kullan�yor bir sonraki sat�rda art�r�yor.	
	
	i-- ve --i de ayn� �ekilde �al���yor.
	
	
	(de�i�ken i�lem= ifade) biraz a�arsak,
	
	i = i % a;
	Bu forma sokmaya �al��al�m.
	i %= a;
	
	i = i*(a+1); ==> i *= a+1
	
	�� ��e Atamalar
	
	i = j = k = 0;
	Bu �ekilde bir atama varsa en sa�dan ba�layarak k'ya 0 at�yor yani k=0. Daha sonra j'ye k'n�n de�erini at�yor(0). j=0. Daha sonra i'ye j'nin de�erini at�yor. i=0
	Sonu�olarak en sa�dan ba�layarak yap�lan atamalar sonucunda,
	i=0;
	j=0;
	k=0;
	Bu �ekilde en sa�dan ba�layrak i�lemler yap�l�r. (Ancak programc�lar bunun �ok daha karma��k versiyonlar�n� tercih etmezler.)

	*/
		
		
	int i=4;
	printf("%d ",i++);
	printf("%d\n",i);
	
	int j=4;
	printf("%d ",++j);
	printf("%d\n",j);
	
	int k=5;
	k*=2+1;	// (2+1)
	printf("%d\n",k);
	
	int x = 5;
	int y = 7;
	int a = 2;
	
	x = y;
	y = x +a +1;
	printf("x: %d\ny: %d\na: %d\n",x,y,a);
	
	x =4;
	y =5;
	a =6;
	printf("x: %d y: %d a: %d\n",--x,++y,a++);
	printf("x: %d y: %d a: %d\n",x,y,a);
	printf("x: %d y: %d a: %d\n",x--,--y,a--);
	/*
	x = 2, a = 6, y = 5
	x = x + (a+1)
	*/

	x += a+1;
	printf("%d\n",x);
	
	x = y = a+4;
	printf("x:%d y:%d a:%d\n",x,y,a);
	
	
	return 0;
}
