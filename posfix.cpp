#include<stdio.h>

int main ()
{

/* 
  posfix : i++
  prefix : ++i
  
     ARALARINDAK� FARK :
	     
		 int i =4;
		 printf("%d",i++);
		 
		 EKRANA 4 DE�ER�N� BASTIRIR
		 ��NK� POSF�X HAL�NDE � N�N ARTTIRMADAN �NCEK� DE�ER�N� (4) KULLANIYOR, B�R SONRAK� SATIRDA ARTTIRIYOR.
		 
		 int i = 4;
		 printf("%d", ++i);
		 
		 EKRANA 5 DE�ER�N� BASTIRIYOR
		 ��NK� BU PREF�X HAL�NDE � N�N ARTTIRILMI� HAL�N� (5) KULLANIYOR, B�R SONRAK� SATIRDA ARTTIRUYOR.
		 
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
