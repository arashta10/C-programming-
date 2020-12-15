#include <stdio.h>

int main(){
	int score[5];
	int i=0;
	
	for(i =0; i<5; i++){
		scanf("%d", &score[i]);
	}
	for(i =0; i<5; i++){
		printf("%d", score[i]);
	}
}
