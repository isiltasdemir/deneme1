#include<stdio.h>

int main ()
{

/* 
  posfix : i++
  prefix : ++i
  
     ARALARINDAKÝ FARK :
	     
		 int i =4;
		 printf("%d",i++);
		 
		 EKRANA 4 DEÐERÝNÝ BASTIRIR
		 ÇÜNKÜ POSFÝX HALÝNDE Ý NÝN ARTTIRMADAN ÖNCEKÝ DEÐERÝNÝ (4) KULLANIYOR, BÝR SONRAKÝ SATIRDA ARTTIRIYOR.
		 
		 int i = 4;
		 printf("%d", ++i);
		 
		 EKRANA 5 DEÐERÝNÝ BASTIRIYOR
		 ÇÜNKÜ BU PREFÝX HALÝNDE Ý NÝN ARTTIRILMIÞ HALÝNÝ (5) KULLANIYOR, BÝR SONRAKÝ SATIRDA ARTTIRUYOR.
		 
*/

    int x = 5;
	int y =10;
	int z = 15;
	
	int a = 7;
	int b = 14;
	
	printf("%d\n",y++);
	printf("%d\n",y);
	printf("%d\n", --x);
	printf("x:%d\ny:%d\nz:%d\n" , x,y,z);
    
    x = y;
    y = x + z + 5;
    
    printf("x:%d\ny:%d\nz:%d\n" ,x,y,z);
    
    a = 10;
    b = 20;
    printf("a:%d\nb:%d\n" ,a++,b++);
    printf("a:%d\nb:%d\n" ,a--,b--);
    
    
    a += b+3;
    printf("%d\n",a);
    
    
    
    
    
    
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 } 
