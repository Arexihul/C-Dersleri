#include<stdio.h>

int main(){
	
	char isim[] = "Cabbar";
	
	printf("%c",isim[1]);
	
	char name[20];
	
	printf("Enter your name: ");
	scanf("%s",name);	// scanf sadece bo�luk karakterini g�rene kadar al�yor yani iki isim girerseniz bo�lu�a kadarolan ilk ismi al�r
	
	printf("Your name is %s", name);
	
	return 0;
}
