#include <stdio.h>

int main(void)
{
	short ar[] = {4, 5, 6, 8, 7, 2, 9}; 

	for(int i = 0; i < sizeof(ar) / sizeof(*ar); ++i)
	    printf("%d ", *(ar+i));

	return 0;
}
