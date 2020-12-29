# include<stdio.h>

int main(){
	
	int vize1,vize2,final;
	float dersort;
	float ortalama;
	
	printf("1.vize notunuzu giriniz:");
	scanf("%d",&vize1);

	printf("2.vize notunuzu giriniz:");
	scanf("%d",&vize2);	

	printf("Final notunuzu giriniz:");
	scanf("%d",&final);
	
	printf("Universite ortalamanizi giriniz:");
	scanf("%f",&ortalama);
	
	dersort = (vize1*0.3) + (vize2*0.3) + (final*0.4);
	
	/*
	
	if(dersort >= 60)	 printf("Ortalamaniz: %.1f. Gectiniz.",dersort);
		
	else 	printf("Ortalamaniz %1.f. Kaldiniz.",dersort);

	*/
	
	
	if(dersort >= 60){
		
		printf("Ortalamaniz: %.1f. Gectiniz.",dersort);
		
	}
	else if(dersort>50){
		
		printf("Ortalamaniz: %1.f. Bute kaldiniz.\n",dersort);
		
		if(ortalama < 2.5){
			printf("Butu gecsen bile dersi seneye al, cunku ortalaman dusuk");
		}
	}
	else {
		printf("Ortalamaniz %1.f. Kaldiniz.",dersort);
	}
	
		
	
	return 0;
}
