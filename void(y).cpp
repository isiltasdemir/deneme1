#include<stdio.h>
#include<stdlib.h>

void isPrime(int x){
	int i, flag=0;
	for(i=2; i<x; i++){
		if(x%i==0){
			flag=1;
		}
	}

    if(flag==1){
    	printf("%d is not Prime\n", x);
}

    else{
    	printf("%s is Prime\n", x);
}
	
}

int main(){
	int z;
	for(z=2; z<100; z++){
		isPrime(z);
	}
	
	return 0;
	
}
