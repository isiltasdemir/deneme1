#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b){
	     int total = a+b;
	     return total;
	     
}

int main (){
	int x,y;
	printf("Enter two numbers:");
	scanf("%d %d", &x, &y);
	
	int z = sum(x,y);
	printf("%d\n", z);
	
	return 0;
	
}
	
	
	
	
	

