#include<stdio.h>

int main(){
	
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i=2; i<num;i++){
		if(num%i==0){
			printf("not prime\n");
			return 0;
			
			/* return 0 yaz�lmazsa d�ng� tekrara girer ve her say� sonunda prime olur */
		}
			
	}
	
	printf("prime");
	
	return 0;
	
	
	
	
	
}
