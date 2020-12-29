#include<stdio.h>

int main(){
	
	int num;
	
	printf("Faktoriyelinin hesaplanmasini istediginiz bir sayi giriniz: ");
	scanf("%d",&num);
	
	int i = 1;
	int x = 1;
		
	while(i<=num){
		
		x *= i;
		i++;
	}
	printf("%d! = %d",num,x);
	
	
	return 0;
}
