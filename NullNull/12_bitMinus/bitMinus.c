#include <stdio.h>

int main(void)
{
	int input1 = 0;
	int input2 = 0;
	scanf_s("%d", &input1);
	scanf_s("%d", &input2);

	int result = input1 + (~input2 + 1);
	printf("result: %d" , result);

}

