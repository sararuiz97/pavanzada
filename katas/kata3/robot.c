#include <stdio.h>
#include <stdbool.h>

bool isCircular(char path[]){
	int x = 0, y = 0;

	for(int i=0; path[i]; i++){
		char move = path[i];
		if(move == 'U'){
			y--;
		} else if (move == 'D'){
			y++;
		} else if (move == 'L'){
			y--;
		} else if (move == 'R'){
			y++;
		}
	}

	return x == 0 && y == 0;
}

int main(){
	char path[] = "PP";
	if(isCircular(path)){
		printf("Sequence of moves is circular \n");
	} else{
		printf("Sequence of moves is NOT circular \n");
	}
}