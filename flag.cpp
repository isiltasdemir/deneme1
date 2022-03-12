#include<stdio.h>
#include<stdlib.h>

int main(){
     int i, flag=0, j;
	 int num;
	 
for(j=2; j<1000; j++){
	 
	 flag=0;
	 for(i=2; i<j; i++){
	 	if(j%i==0){
	 		flag=1;
		 }	
	 }
	
	if(flag==1){
		printf("%d is not prime\n", j);
	}
	
	else{
		printf("%d is prime\n", j);
	}
	
}
	
return 0;	
	
}
