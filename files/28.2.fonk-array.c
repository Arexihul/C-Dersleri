#include<stdio.h>

void doldur(int matris[][4],int size){
	
	int i,j;
	
	printf("[3][4] boyutlu matrisi doldurunuz: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Matrisin [%d][%d] elemanini giriniz: ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
}

void yazdir(int matris[][4],int size){
	
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<4;j++){
			printf("%5d",matris[i][j]);
		}
		printf("\n");
	}
}

int main(){
	
	int matris[3][4];

	doldur(matris,3);	
	yazdir(matris, 3);
	
	return 0;
}
