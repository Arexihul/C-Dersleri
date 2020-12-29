# include<stdio.h>

/*
	boolean veritipi: true or false
*/

int main() {

	int note;
	printf("Notunuzu giriniz:");
	scanf("%d",&note);
	
	if (note>60.0){
		
		printf("Dersten gectiniz.");
		
	}
	else {
		
		printf("Dersten kaldiniz.");
		
	}
	
	
	
	return 0;
}
