#include<stdio.h>
#include<stdlib.h>

int abc(int x){
	x = x*x;
	return x;
	
}

int main(){
	
	int x = 7;
	
	printf("%d\n", abc(x));
	printf("%d\n", x);
	
	return 0;
		
	
}
