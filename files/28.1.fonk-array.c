#include<stdio.h>

int carp(int matris[], int size){
	
	int i,carpim = 1;
	
	for(i=0;i<size;i++){
		carpim*=matris[i];
	}
	
	return carpim;
}

int main(){
	
	int sayilar[5] = {1,2,3,4,5};
	
	printf("Dizideki sayilarin carpimi: %d",carp(sayilar,5));
	
	return 0;
}
