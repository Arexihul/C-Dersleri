#include<stdio.h>
#include<stdbool.h> 

int main(){
	
	int i,sayi;
	int toplam = 0;
	
	for (i=0; true; i++){
		printf("Sayi giriniz (Cikmak icin -1 giriniz): ");
		scanf("%d",&sayi);
		
		if(sayi == -1){
			break;	// döngü durur
		}
		
		toplam += sayi;
	}
	
	printf("Toplam = %d",toplam);
	
	
	
	return 0;
}
