#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
	
    srand(time(NULL));
    /*TÝME KÜTÜPHANESÝNDEN FAYDALANARAK SAYI ÜRETÝR. */
    
    int num;
    
    num = rand()%20;
    /* sayýnýn üst limitini belirlemek için mood kullanýrýz */
    
    printf("%d", num);
    
	return 0;
	
	
}
