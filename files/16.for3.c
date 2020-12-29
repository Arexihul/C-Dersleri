#include<stdio.h>

int main(){
	
	int i;
	int j;
	
	for(i=0; i<4; i++){
		
		for(j=1; j<10; j+=2){
			printf("i= %d, j= %d\n",i,j);
		}
		
	}
	
	
	return 0;
}
