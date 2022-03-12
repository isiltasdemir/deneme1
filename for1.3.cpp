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
			// asal olmayan bir sayý için her bvöleni denk geldiðinde not prime çýktýsý verecek ama en sonunda prime yazmamasý için buraya return eklenmeli
		}
	}
	
	        printf("prime");
	    }
