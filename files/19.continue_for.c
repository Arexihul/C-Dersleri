#include<stdio.h>

int main(){
	
	int i,sayi,toplam=0;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=0; i<=sayi; i++){
		
		if(i%2==1){
			continue;	// döngü en baþa döner
		}
		
		toplam += i;
	}
	
	printf("Cift sayilar toplami = %d",toplam);
	
	
	return 0;
}
