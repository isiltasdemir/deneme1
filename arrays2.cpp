#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[2][3]= { {5, 2, 12}, {9, 7, 11}};
	
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0][0]));
	
	return 0;
	
}
