# include<stdio.h>

int main(){
	
	// Tek yorum sat�r�. Tek sat�rl�k yorumlar i�in complier(derleyici) yorumlar aras�na yazd���m�z �eyleri g�rmezden gelir.
	
	/*
	
		�oklu yar�m sat�r�.
		Buray� diledi�imiz gibi yorumlarla doldurabiliriz.
		
	*/
	
	/* 
		DE���KENLER
		Temel De�i�kenlerimiz: char, int, float, double, short, long
		
		char veritipi: 1 byte (8 bit) 0'dan 255(2^8)'e kadar de�er alabilir.	Her bir de�er ASCII Tablosundaki bir de�ere e�de�erdir.
		
		int veritipi: 4 byte (32 bit) -2^16 dan 2^16 ya kadar de�er al�r. 2,32,45 gibi tamsay� de�erleri.
		
		short veritipi (short int): 2 byte (16 bit) -2^8 den 2^8 e kadar de�er al�r. int ile ayn�d�r, sadece de�er aral��� daha k���kt�r.
		
		long veritipi (long int): 8 byte (64 bit) -2^32 den 2^32 ye kadar de�er al�r. int ile ayn�d�r, sadece de�er aral��� daha b�y�kt�r.
	
		float veritipi: Kesirli say�lar� tutmak i�in kullan�l�r. Byte'� i�letim sistemine g�re de�i�ebilir. 0.1, 2.85 gibi de�erler.
		
		double veritipi: Ayn� float gibidir, fakat daha kapsaml� say�lar i�in kullan�labilir.
		
	/*
		De�i�ken Tan�mlama
		
		veritipi de�i�kenad�;
	*/
	
	/*
		FORMAT BEL�RLEY�C�LER
		
		%d (decimal) ---> int de�erler i�in printf'de format belirleyici olarak kullan�l�r.
		�rnek:
		int x= 5;
		printf("%d",x);  => ekrana 5 de�eri bast�r�l�r.
		
		%f (float) ---> float ve double i�in   
		�rnek:
		float f = 3.12;
		double d =4.2112313;
		printf("%f %f",f,d)  => ekrana 3.12 4.2112313 bast�r�l�r.
		
		%c (char) ---> karakterler i�in kullan�l�r. 
		�rnek:
		char c1 = "a";
		printf("%c",c1)  => ekrana a bast�r�l�r.
		printf("%d",c1)  => ekrana ASCII tablosundaki c' nin decimal kar��l��� bast�r�l�r.
		
		%s (string) ---> karakter dizileri i�in kullan�l�r. ("C Programlama")
		
		printf("%s","C Programlama")  => ekrana C Programlama bast�r�l�r.
	*/	
		
	return 0;
}










