#include <stdio.h>

int main(void)
{
	int g = 378347;
	char* ptr = (char *)&g;

	for( int i = 0; i < sizeof(int); ++i) {
		printf("%d \n",  *ptr);
		ptr++;
	}
	
	return 0;
}
