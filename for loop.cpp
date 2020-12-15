#include<stdio.h>

int main(){
	int n;
	int sum = 0;
	
	printf("Enter n:");
	scanf("%d", &n);
	
	for(int i = 1; i <=n; i++){
		sum = sum + (i+1);
	}
	
	printf("Sum: %d", sum);
}
