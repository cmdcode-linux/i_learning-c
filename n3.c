#include <stdio.h>

int main(void){
	int a = 7, b = 7;
	int result = (a == b) ? a * 2 : a + b;
	printf("%d\n", result);
	return 0;
}
