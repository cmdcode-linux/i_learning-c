#include <stdio.h>

int main(void)
{
	int pass_code = 78;
	int enter_code;

	do{
		printf("Please enter the secret code: ");
		scanf("%d", &enter_code);
	} while(enter_code != pass_code);

	printf("Access is allowed\n");

	return 0;
}
