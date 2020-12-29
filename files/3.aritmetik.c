#include<stdio.h>

int main(){
	
	/*
		x + y
		x - y 
		x * y
		x / y
		
		x % y --> x'in y ile bölümünden kalaný verir
	
		+x
		-x
	*/
	
	int x1 = 1;
	int x2 = -1;
	
	printf("%d\n",12+9);
	printf("%.1f\n",12.1+9.2);
	printf("%d\n",12-9);
	printf("%d\n",12*9);
	printf("%f\n",12.1*9.5);
	printf("%d\n",12/9);
	printf("%f\n",12./9);
	printf("%.1f\n",12/9.);
	printf("%.3f\n",12./9.);	
	printf("%d\n",12%9);
	
	printf("%d\n",-x1);
	printf("%d\n",-x2);


	return 0;
}

