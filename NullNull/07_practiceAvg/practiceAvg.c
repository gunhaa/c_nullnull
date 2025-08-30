#include <stdio.h>

int main(void) 
{
	/*
	사용자로부터 두 정수를 입력받아 평균을 출력하는 예제를 작성
	입력은 반드시 scanf_s() 함수를 사용하고
	출력은 printf() 함수를 이용할 것
	평균값 출력 시 반드시 소수점 둘째 자리까지만 표시
	input: 두 정수를 입력하세요.: 10 20
	output: AVG: 15.00
	*/
	int input1 = 0;
	int input2 = 0;

	scanf_s("%d", &input1);
	scanf_s("%d", &input2);

	printf("AVG: %.2f", ((double)input1+input2)/2);
}