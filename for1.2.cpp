#include<stdio.h>
#include<stdlib.h>

int main() {
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for (i=2; i<num; i++){
		if(num%i==0){
			printf("Not prime\n");
			return 0;
			// asal olmayan bir say� i�in her bv�leni denk geldi�inde not prime ��kt�s� verecek ama en sonunda prime yazmamas� i�in buraya return eklenmeli
		}
	}
	
	        printf("prime");
	    }
