#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
	
    srand(time(NULL));
    /*T�ME K�T�PHANES�NDEN FAYDALANARAK SAYI �RET�R. */
    
    int num;
    
    num = rand()%20;
    /* say�n�n �st limitini belirlemek i�in mood kullan�r�z */
    
    printf("%d", num);
    
	return 0;
	
	
}
