#include <stdio.h>

int main(){
	
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler\n1- Bakiye sorgulama\n2-Para cekme\n3-Para yatirma\n4-Havale yapma\n5-Kart iade\n\n\n");
	
	printf("Islemi seciniz:");
	scanf("%d",&islem);
	
	switch(islem) {
		case 1:
			printf("Bakiyeniz: %d",bakiye);
			
			break;		
		case 2:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekmek istediginiz tutar: ");
			scanf("%d",&tutar);
			if (tutar>bakiye){
				printf("Cekmek istediginiz miktar bakiyenizde bulunmamaktadir");
			}
			else {
				bakiye -= tutar;
				printf("Paranizi alabilirsiniz. Yeni bakiyeniz: %d",bakiye);
			}
			
			break;
		case 3:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Yatýrmak istediðiniz tutarý giriniz: ");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Yeni bakiyeniz: %d",bakiye);
		
			break;		
		case 4:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale yapmak istediginiz tutarý giriniz: ");
			scanf("%d",&tutar);
			if (tutar>bakiye){
				printf("Havale yapmak istediginiz miktar bakiyenizde bulunmamaktadir");
			}
			else {
				bakiye -= tutar;
				printf("Isleminiz tamamlanmistir. Yeni bakiyeniz: %d",bakiye);
			}		
		
			break;		
		case 5:
			printf("Kartýnýz iade edildi.");
		
			break;		
		default:
			printf("Bilinmeyen islem.");
		
			break;
			
	}
	
	
	return 0;
}
