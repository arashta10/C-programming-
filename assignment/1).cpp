#include <stdio.h>

int sum(int a, int b){
	return a-b;
}

int main(){
	
int a,b,c;

a = 4;
b = 2;
c = sum(a,b);
printf("The subtraction of two numbers is: %d",c);
return 0;
}
