/*
	giriþ-çýkýþ fonksiyonlarý
	printf ve scanf
	
	float birdeðer olan x'i ekrana bastýrmak için printf("%f",x); yapýyoruz. Benzer bir þekilde float olan bir x tanýmlayýp 
	daha sonra bu deðeri kullanýcýdan almak istersek de scanf("%f",&x); þeklinde yazýyoruz. "&" iþareti x'e kullanýcýdan gelen deðeri 
	atadýðýmýzý gösteriyor. Diðer format belirleyicileri printf ile aynýdýr.
*/

# include<stdio.h>

#define PI 3.14

int main(){
	
	int yaricap;
	float hacim;
	
	printf("Kurenin yaricapini giriniz: ");
	scanf("%d",&yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %.2f dir",hacim);
	 
	return 0;
}

