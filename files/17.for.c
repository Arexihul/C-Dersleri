#include<stdio.h>

int main(){
	
	// Fibonacci dizisi 1,1,2,3,5,8,13,...
	
	int ilksayi=1, ikincisayi=1;
	int i;
	
	printf("%d\n%d\n",ilksayi,ikincisayi);
	
	for(i=0; i<12; i++){
		
		int temp = ikincisayi;
		ikincisayi += ilksayi;
		ilksayi = temp;
		
		printf("%d\n",ikincisayi);
		
	}
	
	
	
	
	
	
	return 0;
}
