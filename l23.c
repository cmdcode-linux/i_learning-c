#include <stdio.h>

int main(void)
{
	/*обявлені перемені*/
	int n, s;

	scanf("%d", &n);

	/*Цикли з предумовою for*/
	for(s = 0; n > 0; --)
	   s += n*n;

	   printf("s = %d", s);
	   return 0;
}
