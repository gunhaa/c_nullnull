#include <stdio.h>

int main(void)
{
	/*
	사용자로부터 세 정수를 입력 받아 총합을 출력
	사용자 입력이 저장되는 변수 하나와 값을 누적하는
	변수 하나만 사용해 구현
	*/
	int input = 0;
	int acc = 0;

	scanf_s("%d", &input);
	acc += input;

	scanf_s("%d", &input);
	acc += input;

	scanf_s("%d", &input);
	acc += input;

	printf("acc: %d", acc);
}