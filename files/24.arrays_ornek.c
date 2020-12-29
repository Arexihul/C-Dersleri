#include<stdio.h>

int main(){
	/*
		3 5 1 3 2 
		4 4 4 5 5
		9 8 9 7 7 
		
		16 17 14 15 14
	*/
	
	/*
	int matris[3][5] = {{3,5,1,3,2},{4,4,4,5,5},{9,8,9,7,7}};
	int i,j,sum=0;
	
	for(j=0;j<5;j++){
		
		for(i=0;i<3;i++){
			sum += matris[i][j];
		}
		printf("%d ",sum);
		sum = 0;
	}
	*/
	
	int matris[3][5];
	int i,j,sum=0;
	
	for(i=0;i<3;i++){
		
		for(j=0;j<5;j++){
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		
		for(j=0;j<5;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	for(j=0;j<5;j++){
		
		for(i=0;i<3;i++){
			sum+= matris[i][j];
		}
		printf("%d ",sum);
		sum = 0;
	}
	
	
	return 0;
}
