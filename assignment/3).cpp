#include <stdio.h>

int sum(int a, int b, int c){
	return a*b*c;
}

int main(){
	
int a,b,c,d;

a = 4;
b = 2;
c = 5;
d = sum(a,b,c);
printf("The product of three numbers is: %d",d);
return 0;
}
