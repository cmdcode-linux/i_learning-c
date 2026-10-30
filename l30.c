#include <stdio.h>

#define SIZE_BUFFER     14
int main(void)
{
	int buffer[SIZE_BUFFER] = {1, 2, 3, 4,};

	//buffer[2] = 4;
	//buffer[0] = 3 * 9;
	//buffer[12]  = 14 - 8;

	size_t bytes_buffer = sizeof(buffer);
	size_t size_buffer = sizeof(buffer) / sizeof(buffer[0]);
	printf("%zu , %zu\n", bytes_buffer, size_buffer);

	for(int i = 0; i < SIZE_BUFFER; ++i){
		printf(" %d" , buffer[i]);
	}
    return 0;
}
