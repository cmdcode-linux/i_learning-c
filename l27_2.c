#include <stdio.h>

int main(void)
{
    int arg = 7;
    int *ptr = NULL;

    ptr = &arg;

    if(ptr != NULL)
        *ptr = 1;

    printf("ptr = %p, *ptr = %d, agr = %d\n", ptr, *ptr, arg);

	return 0;
}
