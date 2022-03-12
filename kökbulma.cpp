#include<stdio.h>
#include<math.h>

/* ax^2+bx+c denkleminin köklerini bulacaðýz. */

int main(){
	
	   int a,b,c;
	   float x1,x2;
	   float delta;
	   
	   printf("Denklem icin a degerini giriniz: ");
	   scanf("%d", &a);
	
	   printf("Denklem icin b degerini giriniz: ");
	   scanf("%d", &b);
	
	   printf("Denklem icin c degerini giriniz: ");
	   scanf("%d", &c);
	   
	   
	   delta = b*b-4*a*c;
	   
	   x1 = (-b + (sqrt(delta))) /2*a;
	
	   x2 = (-b - (sqrt(delta))) /2*a;
	   
	   printf("Denklemin birinci koku x1 %f, ikinci koku x2 %f", x1,x2);
	   
	   
	   
	   
	   
	   return 0;
	
	

	
}
