#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	float aritmetik;
	
	printf("5 tane sayi giriniz: ");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	
	aritmetik = (a+b+c+d+e)/5.0;
	printf("girdiginiz sayilarin aritmetik ortalamasi %f", aritmetik);
	
	return 0;
	
	
	
}
