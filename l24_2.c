#include <stdio.h>

int main(void)
{
	int total_box = 3;
	int total_files = 6;

	for(int i = 0; i < total_box; ++i){
	for(int j = 0; j < total_files; ++j){
		printf("Box %d , file %d\n", i + 1, j + 1);
	}
	}
	return 0;
}
