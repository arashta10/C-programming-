#include <stdio.h>
#include <string.h>

int main() {
	char str1[50] = "Old value";
	char str2[50] = "New Value";
	strcpy(str1,str2);
	
	printf("%s", str1);
}
