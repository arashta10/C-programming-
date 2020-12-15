#include <stdio.h>

int myName(){
	
int i;
printf("Enter a number:");
scanf("%d", &i);
return i;

}

int main(){
	int c;
	c=myName();
	printf("The number is %d", c);
	
	return 0;
}
