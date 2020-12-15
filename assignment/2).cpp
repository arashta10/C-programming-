#include <stdio.h>

int myName(){
	int num, i;
	printf("Enter any number:");
	scanf("%d",&num);
	i=num*num;
	}
int main(){
	int c;
	c=myName();
	printf("The square of the given num is: %d", c);
	return 0;
}
