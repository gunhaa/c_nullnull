#include <stdio.h>

int main(void)
{
	/*
	두 변수의 값이 교환하는 코드를 작성, 사용자로 부터
	정수를 입력 받아 각각 int a,b에 저장하고
	임시 변수 tmp를 통해 a,b의 값을 교환한 후 출력하는
	프로그램을 작성
	*/

	int a = 0;
	int b = 0;

	scanf_s("%d%d", &a, &b);

	int temp = b;
	b = a;
	a = temp;
	printf("a:%d, b:%d", a, b);
}