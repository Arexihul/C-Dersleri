# include<stdio.h>

int main(){
	
	// Tek yorum satýrý. Tek satýrlýk yorumlar için complier(derleyici) yorumlar arasýna yazdýðýmýz þeyleri görmezden gelir.
	
	/*
	
		Çoklu yarým satýrý.
		Burayý dilediðimiz gibi yorumlarla doldurabiliriz.
		
	*/
	
	/* 
		DEÐÝÞKENLER
		Temel Deðiþkenlerimiz: char, int, float, double, short, long
		
		char veritipi: 1 byte (8 bit) 0'dan 255(2^8)'e kadar deðer alabilir.	Her bir deðer ASCII Tablosundaki bir deðere eþdeðerdir.
		
		int veritipi: 4 byte (32 bit) -2^16 dan 2^16 ya kadar deðer alýr. 2,32,45 gibi tamsayý deðerleri.
		
		short veritipi (short int): 2 byte (16 bit) -2^8 den 2^8 e kadar deðer alýr. int ile aynýdýr, sadece deðer aralýðý daha küçüktür.
		
		long veritipi (long int): 8 byte (64 bit) -2^32 den 2^32 ye kadar deðer alýr. int ile aynýdýr, sadece deðer aralýðý daha büyüktür.
	
		float veritipi: Kesirli sayýlarý tutmak için kullanýlýr. Byte'ý iþletim sistemine göre deðiþebilir. 0.1, 2.85 gibi deðerler.
		
		double veritipi: Ayný float gibidir, fakat daha kapsamlý sayýlar için kullanýlabilir.
		
	/*
		Deðiþken Tanýmlama
		
		veritipi deðiþkenadý;
	*/
	
	/*
		FORMAT BELÝRLEYÝCÝLER
		
		%d (decimal) ---> int deðerler için printf'de format belirleyici olarak kullanýlýr.
		Örnek:
		int x= 5;
		printf("%d",x);  => ekrana 5 deðeri bastýrýlýr.
		
		%f (float) ---> float ve double için   
		Örnek:
		float f = 3.12;
		double d =4.2112313;
		printf("%f %f",f,d)  => ekrana 3.12 4.2112313 bastýrýlýr.
		
		%c (char) ---> karakterler için kullanýlýr. 
		Örnek:
		char c1 = "a";
		printf("%c",c1)  => ekrana a bastýrýlýr.
		printf("%d",c1)  => ekrana ASCII tablosundaki c' nin decimal karþýlýðý bastýrýlýr.
		
		%s (string) ---> karakter dizileri için kullanýlýr. ("C Programlama")
		
		printf("%s","C Programlama")  => ekrana C Programlama bastýrýlýr.
	*/	
		
	return 0;
}










