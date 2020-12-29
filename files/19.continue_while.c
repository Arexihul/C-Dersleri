#include<stdio.h>

int main(){
	
	int i=0,toplam=0,sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	while(i<=sayi){
		
		if(i%2==1){
			i++;
			continue;
		}
		
		toplam +=i;
		i++;
	}
	
	printf("Cift sayilar toplami = %d",toplam);
	
	
	return 0;
}
