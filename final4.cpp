#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	
	int rndnum = rand()%1000;
	int guess;
	
	printf("Guess the number (0-999):");
	scanf("%d", &guess);
	
	while(1){
		
	        if(guess<rndnum){
	        	printf("Guess higher");
	        	break;
			}
			else if(guess>rndnum){
				printf("Guess lower");
				break;
			}
			else {
				printf("You have found it.Congrats.");
				break;
			}
	}
	
	return 0;
	
	
}
