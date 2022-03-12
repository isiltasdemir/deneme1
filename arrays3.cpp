#include<stdio.h>
#include<stdlib.h>

void printmyarr(int z[][3], int rows){
	int i,j;
	for(i=0; i<rows; i++){
		for(j=0; j<3; j++){
			printf("%d\t", z[i][j]);
		}
	}
	
}
int main(){
	int a[2][3]={ {5, 2, 12}, {9, 7, 11}};
	
	
	int rows= sizeof(a)/sizeof(a[0]);
	int colombs=sizeof((a[0])/4);
	
	printmyarr(a, rows);
	return 0;
	
	
}
