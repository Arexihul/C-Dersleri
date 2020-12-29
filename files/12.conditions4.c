# include<stdio.h>

int main(){
	
	int vize1,vize2,final;
	float okulort;
	float dersort;
	
	printf("1.vize notunuz:");
	scanf("%d",&vize1);
	printf("2.vize notunuz:");
	scanf("%d",&vize2);
	printf("Final notunuz:");
	scanf("%d",&final);
	printf("Universite ortalamaniz:");
	scanf("%f",&okulort);
	
	dersort = (vize1*0.3) + (vize2*0.3) + (final*0.4);
	
	if (dersort>=90) {
		printf("Harf notunuz AA ve Ders ortalamaniz %2.f",dersort);
	}
	else if (dersort>=85 && dersort<90) {
		printf("Harf notunuz BA ve Ders ortalamaniz %2.f",dersort);
	}
	else if (dersort>=80 && dersort<85) {
		printf("Harf notunuz BB ve Ders ortalamaniz %2.f",dersort);
	}	
	else if (dersort>=75 && dersort<80) {
		printf("Harf notunuz CB ve Ders ortalamaniz %2.f",dersort);
	}	
	else if (dersort>=70 && dersort<75) {
		printf("Harf notunuz CC ve Ders ortalamaniz %2.f\n",dersort);
		
		if(okulort<2.5) {
			printf("Dersi tekrar alman yararlý olur cunku ortalaman dusuk");
		}
	}	
	else if (dersort>=65 && dersort<70) {
		printf("Harf notunuz DC ve Ders ortalamaniz %2.f\n",dersort);
		
		if(okulort<2.5) {
			printf("Dersi tekrar alman yararlý olur cunku ortalaman dusuk");
		}
	}	
	else if (dersort>=60 && dersort<65) {
		printf("Harf notunuz DD ve Ders ortalamaniz %2.f\n",dersort);
		
		if(okulort<2.5) {
			printf("Dersi tekrar alman yararlý olur cunku ortalaman dusuk");
		}
	}
	else {
		printf("Harf notunuz FF ve Ders ortalamaniz %2.f\n",dersort);
		printf("Dersten kaldiniz");
	}	
	
	
	return 0;
}
