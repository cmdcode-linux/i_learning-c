#include <stdio.h>

#define SIZE_BUFFER     19
int main(void)
{
	int buffer[SIZE_BUFFER];

	buffer[2] = 4;
	buffer[0] = 3 * 9;
	buffer[12]  = 14 - 8;

	for(int i = 0; i < SIZE_BUFFER; ++i){
		printf("%d\n", buffer[i]);
	}
    return 0;
}
