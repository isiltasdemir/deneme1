#include<stdio.h>

int main(){
	
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i=2; i<num;i++){
		if(num%i==0){
			printf("not prime\n");
			return 0;
			
			/* return 0 yazılmazsa döngü tekrara girer ve her sayı sonunda prime olur */
		}
			
	}
	
	printf("prime");
	
	return 0;
	
	
	
	
	
}
