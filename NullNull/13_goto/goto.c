#include <stdio.h>

int main(void)
{
	int input = 0;

INPUT: 
	printf("input number: ");
	scanf_s("%d", &input);
		if (input < 0 || input > 10) {
			goto INPUT;
		}

		puts("End");
		return 0;
}