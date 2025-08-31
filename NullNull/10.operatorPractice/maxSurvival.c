#include <stdio.h>

int main(void)
{
	/*
	사용자로부터 입력 받은 정수 중 가장 큰 수를 출력하는 프로그램을 작성
	정수는 부호가 있는 32비트 정수로 한정하며, scanf_s() 함수로 한 번에 한 값만 입력받고
	내부적으로 최대값을 계속 갱신하는 구조로 작성
	*/

	signed int input = 0;
	signed int curMax;

	scanf_s("%d", &input);
	curMax = input;

	scanf_s("%d", &input);
	curMax = (input >= curMax ? input : curMax);

	scanf_s("%d", &input);
	curMax = (input >= curMax ? input : curMax);

	printf("MAX: %d", curMax);
	return 0;
}