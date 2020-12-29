#include<stdio.h>

/*
	Fonksiyon tanýmlama
	
	DonusTipi FonskiyonAdi(Parametreler)
	{
		///// Fonksiyon Bloðu
		
		
		Yapýlacak Ýþlemler
	
	}
	
	void fonksiyon tipi hiç bir þey döndürmez
	
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
