#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,k;
	int num;
	
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
		for(j=num-1; j>=i; j--){
			printf(" ");
		}
		    
	
	
		for(k=1; k<=(2*i-1); k++){
		    	printf("*");
		}
	
		printf("\n");
	}

    return 0;
}
