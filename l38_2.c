#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[12] = "Hello";
	char s2[10] = "Hello";

	if(strcmp(s1, s2) == 0){
		puts("strings are equal!");
		return 0;
	} else {
		puts("strings are not equal!");
	}
	return 0;
}
