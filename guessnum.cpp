#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	int guess;
	
	printf("Guess the number (0-999):");
	scanf("%d", &guess);
	
	while (1){
		
		if(guess<'rndnum'){
			printf("Guess higher");
		}
		
   else if(guess>'rndnum'){
   	        printf("Guess lower");
        }
		
      else{
      	    printf("You have found it.Congrats.");
      	    break;   /*kendini içeren ilk döngüyü kýrar */
      	    
      	
	  }		
		
	return 0;
		
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

