#include<stdio.h>
#include<string.h>

int uzunluk(char name[]){
	
	int i,length=0;
	for(i=0;name[i]!='\0';i++){
		length++;
	}
	return length;
}

int main(){
	
	char isim[] = "murat";
	/*	'm'
		'u'
		'r'
		'a'
		't'
		'\0'	null karakter */
	
	printf("Karakterin uzunlugu: %d",uzunluk(isim));

	printf("\nKarakterin uzunlugu: %d",strlen(isim));	// strlen fonksiyonu string.h içerisinde bulunur.
	
	return 0;
}
