# include<stdio.h>

int main() {
	
	/*
	
	ATAMALAR, ARTIRMA AZALTMA ÝÞLEMLERÝ
	
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
	Atama durumunda ilk baþta sað taraftaki kýsým hesaplanýr, sonra atama yapýlýr.
	
	x+1 = 2; (Bu tür ifadeler C'de geçerli deðildir. Sol taraftaki deðer saf bir deðiþken olmalý. x gibi, y gibi)
	
	Artýrma, Azaltma Ýþlemleri
	
	i = i+1; 
	Bunun eþiti ayný zamanda i += 1 ( i = i+1 ile ayný þey) (deðiþken iþlem= ifade)
	
	C'de deðiþkeni 1 artýrmanýn pratik bir yolu var.
	postfix: i++;
	prefix: ++i;
	Arasýndaki fark:
	postfix:
	int i = 4;
	print("%d",i++); --> ekrana 4 deðerini bastýrýr çünkü postfix halinde i'nin artýrmadan önceki deðerini(4) kullanýyor bir sonraki satýrda artýrýyor.
	int i = 4;
	print("%d",++i); --> ekrana 5 deðerini bastýrýr çünkü prefix halinde i'nin artmýþ deðerini(5) kullanýyor bir sonraki satýrda artýrýyor.	
	
	i-- ve --i de ayný þekilde çalýþýyor.
	
	
	(deðiþken iþlem= ifade) biraz açarsak,
	
	i = i % a;
	Bu forma sokmaya çalýþalým.
	i %= a;
	
	i = i*(a+1); ==> i *= a+1
	
	Ýç Ýçe Atamalar
	
	i = j = k = 0;
	Bu þekilde bir atama varsa en saðdan baþlayarak k'ya 0 atýyor yani k=0. Daha sonra j'ye k'nýn deðerini atýyor(0). j=0. Daha sonra i'ye j'nin deðerini atýyor. i=0
	Sonuçolarak en saðdan baþlayarak yapýlan atamalar sonucunda,
	i=0;
	j=0;
	k=0;
	Bu þekilde en saðdan baþlayrak iþlemler yapýlýr. (Ancak programcýlar bunun çok daha karmaþýk versiyonlarýný tercih etmezler.)

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
