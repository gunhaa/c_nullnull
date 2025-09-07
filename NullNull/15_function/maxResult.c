#include <stdio.h>
#include "signature.h"

//int GetUserInput(void);
//int GetMaxResult(int, int, int);

int main(void) 
{
	/*
	사용자로부터 세 정수를 입력 받아 최댓값을 반환하는 함수를 작성
	사용자 입력을 받는 부분과 최댓값을 계산하는 코드는 반드시 별도 함수로 분리
	*/

	int userInput1 = GetUserInput();
	int userInput2 = GetUserInput();
	int userInput3 = GetUserInput();

	int max = GetMaxResult(userInput1, userInput2, userInput3);
	printf("Max: %d", max);
	return 0;
}

int GetUserInput(void)
{
	int userInput = 0;
	scanf_s("%d", &userInput);
	return userInput;
}

int GetMaxResult(int input1, int input2, int input3) 
{
	int firstResult = input1 > input2 ? input1 : input2;
	int finalResult = input3 > firstResult ? input3 : firstResult;
	return finalResult;
}