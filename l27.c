#include <stdio.h>

int main(void)
{
    int arg = 7;
    int *ptr_arg;
    char *ptr;
    
    ptr_arg = &arg;
    ptr = (char *)ptr_arg;
    
    *ptr_arg = 1;
     printf("ptr = %p, *ptr = %d, arg = %d\n", ptr, *ptr, arg);

	return 0;
}
