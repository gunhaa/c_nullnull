#include <stdio.h>

int main(void)
{

	/*
	사용자로부터 입력 받은 정수 중 가장 큰 수를 출력
	정수는 부호가 있는 32비트 정수
	scanf_s()로 한번에 세 값을 모두 입력
	최대값은 printf()출력
	*/

	int input1 = 0;
	int input2 = 0;
	int input3 = 0;
	int max = 0;

	scanf_s("%d%d%d", &input1, &input2, &input3);
	
	max = input1 >= input2 ? input1 : input2;

	max = max >= input3 ? max : input3;

	printf("Max: %d", max);


	return 0;
}