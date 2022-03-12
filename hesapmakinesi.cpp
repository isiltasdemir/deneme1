#include<stdio.h>

int main(){
	/* virgüllü tam sonuçlar almak istiyorsan int yerine float %d yerine %f yazabilirsin */
	int x, y;
	char op;
	
	printf("enter two numbers");
	scanf("%d %d", &x, &y);
	
	printf("enter an operator");
	scanf(" %c", &op);
	
	if(op == '+'){
		printf("the result is %d", x+y);
	}
	
	else if(op == '-'){
		printf("the result is %d", x-y);
	}
	
	else if(op == '*'){
		printf("the result is %d", x*y);
	}
	
	else if(op == '/'){
	    if(y == 0){
	    	printf("second number cannot be 0");
		}
		printf("the result is %d", x/y);
	}
	
	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

