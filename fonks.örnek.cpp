#include<stdio.h>
#include<stdlib.h>

int abc(int x){
	
	if(x==1)
	    return 5;
	
	else
	    return 2*abc(x-1);    	
	
}


int main(){
	
	printf("%d\n", abc(4));
	
	return 0;
	
	
	/* f(x)=2*f(x-1)    f(1)=5      f(4)=?    denklemini çözdük */
	
	
	
	
}
