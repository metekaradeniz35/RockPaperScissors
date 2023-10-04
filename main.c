#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int option;
	srand(time(NULL));
	
	int cpuO = rand() % 3 +1; // 1. rock 2. paper 3. scissors
	printf("Welcome to the rock paper scissors game");
	printf("Choose an option (1.rock 2.paper 3.scissors)");
	scanf("%d",&option);
	
	
	switch(option){
		case 1:
			if(cpuO == 1){
				printf("It's a tie game");
			} else if(cpuO == 2){
				prinf("You lose");
			} else if(cpuO == 3){
				prinf("You win");
			}
			break;
		case 2:
			if(cpuO == 1){
				printf("You win");
			} else if(cpuO == 2){
				prinf("It's a tie game");
			} else if(cpuO == 3){
				prinf("You lose");
			}
			break;
		case 3:
			if(cpuO == 1){
				printf("You lose");
			} else if(cpuO == 2){
				prinf("You win");
			} else if(cpuO == 3){
				prinf("It's a tie game");
			}
			break;
	}	
	return 0;
}
