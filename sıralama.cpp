#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int x;
	int j;
	
	int a[5]= {12, 9, 5, 17, 0};
	
	for(i=0; i<5; i++){
		printf("%d\t", a[i]);
		// array in ilk satýrýný yazdýrýr
	}
	
	for(j=0; j<5; j++){
		for(i=0; i<4; i++){
			if(a[i]> a[i+1]){
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}
		}
	}
	
	printf("\n");
	
	for(i=0; i<5; i++){
		printf("%d\t", a[i]);
	}
	return 0;
}

