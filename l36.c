#include <stdio.h>

int main(void)
{
    // scanf_s() , gets_s()
	char sp[] = "Hello, World";
	printf("sp = %s\n", sp);

	char bf[20];
	fgets(bf, sizeof(bf), stdin);
	
	puts(bf);

	char md[20];
	int max_len = sizeof(md), i = 0;
	char *ptr = md, ch;

	while((ch = getchar()) != '\n' && ch != EOF && i < max_len-1)
	    ptr[i++] = ch;

	ptr[i] = '\0';

	puts(md);

	return 0;
}
