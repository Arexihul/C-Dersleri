#include<stdio.h>
#include<string.h>


void terscevir(char dizi[]){
	
	int i,uzunluk,temp;
	uzunluk = strlen(dizi);
	
	for(i=0;i<uzunluk/2;i++){
		temp = dizi[i];
		dizi[i] = dizi[uzunluk-1-i];
		dizi[uzunluk-1-i] = temp;
	}
	
	//	 m e r h a b a \0
}

int main(){
	
	char text[200];
	
	printf("string giriniz: ");
	gets(text);
	
	terscevir(text);
	printf("ters cevrilmis hali: %s",text);
	
	return 0;
}
