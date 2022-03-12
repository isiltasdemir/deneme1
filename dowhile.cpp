#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main (){
	
	srand(time(NULL));
	
	int num;
	char choice;
	
	do{
		num=rand()%20;
		printf("the generated number is %d, num");
		
		printf("\n Do you want to generate again (y/n):");
		scanf("%c", &choice);
		
	}
	
	while (choice == 'y');
	
	return 0;
	
	
	
}
	
