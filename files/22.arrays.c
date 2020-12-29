#include<stdio.h>

int main(){
	
	char isim[] = "Cabbar";
	
	printf("%c",isim[1]);
	
	char name[20];
	
	printf("Enter your name: ");
	scanf("%s",name);	// scanf sadece boþluk karakterini görene kadar alýyor yani iki isim girerseniz boþluða kadarolan ilk ismi alýr
	
	printf("Your name is %s", name);
	
	return 0;
}
