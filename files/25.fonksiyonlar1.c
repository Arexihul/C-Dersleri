#include<stdio.h>

/*
	Fonksiyon tan�mlama
	
	DonusTipi FonskiyonAdi(Parametreler)
	{
		///// Fonksiyon Blo�u
		
		
		Yap�lacak ��lemler
	
	}
	
	void fonksiyon tipi hi� bir �ey d�nd�rmez
	
*/

void hatayibas(int hata){
	
	printf("Hata Kodu %d", hata);
}

int main() {
	
	int sayi;
	
	printf("Negatif olmayan bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi<0){
		hatayibas(404);
	}
	else{
		printf("Tebrikler");
	}
	
	return 0;
}
