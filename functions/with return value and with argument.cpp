#include <stdio.h>

int sum(int a, int b){
	return a-b;
}

int main(){
	
int a,b,c;

a = 10;
b = 4;
c = sum(a,b);
printf("The difference of two numbers is: %d",c);
return 0;
}
