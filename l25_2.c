#include <stdio.h>

int main(void)
{
	int x, s = 0;

	while(scanf("%d", &x) == 1 && x != 0) {
		if(x % 2 == 0)
		    continue;

		s += x;
	}

	printf("s = %d", s);
	return 0;	
}
