#include<stdio.h>
#include<stdlib.h>

int t = 40;
// global: herhangi bir fonksyonun içinde olmayan

int abc(int x){
	x=x*x;
	return x;
	
} 

int main(){
	int x = 5;
	printf("%d\n", abc(x));
	printf("%d\n", x);
    // ikisi de x ama farklý deðiþken
	
	return 0;

}
 

