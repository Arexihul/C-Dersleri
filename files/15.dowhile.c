#include<stdio.h>

int main(){
	
	// 1234 rakamlar� toplam� ve ka� haneli oldu�u
	
	int num,hane=0,toplam=0;
	
	printf("Sayi giriniz: ");
	scanf("%d",&num);
	
	do {
		hane+=1;
		toplam+=(num%10);
		
		num = num/10;
		
	}
	while(num>0);
	
	printf("Girdiginiz sayi %d haneli ve rakamlari toplami %d",hane,toplam);
	
	
	return 0;
}
