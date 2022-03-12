#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int i;
	int x[5] = {7, 5, 13, 4, 10};
	
	
	for(i=0; i< sizeof(x[0])/sizeof(int)){
		printf("%d\n", x[i]);
	}
		    
		
	return 0;
}






