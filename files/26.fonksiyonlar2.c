#include<stdio.h>

int topla(sayi1,sayi2){
	
	return sayi1+sayi2;
	
}

int faktoriyel(int sayi){
	
	int fakt=1;
	for(;sayi>0;sayi--){
		fakt*=sayi;
	}
	
	return fakt;
}

int main(){
	
	int sayi1,sayi2;
	
	printf("Toplamini istediginiz 2 sayi giriniz: ");
	scanf("%d %d",&sayi1,&sayi2);
	
	printf("%d + %d = %d",sayi1,sayi2,topla(sayi1,sayi2));
	
	int n;
	
	printf("\nFaktoriyelini hesaplayacaginiz sayiyi giriniz: ");
	scanf("%d",&n);
	
	printf("%d! = %d",n,faktoriyel(n));
	
	return 0;
}
