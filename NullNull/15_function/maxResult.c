#include <stdio.h>
#include "signature.h"

//int GetUserInput(void);
//int GetMaxResult(int, int, int);

int main(void) 
{
	/*
	����ڷκ��� �� ������ �Է� �޾� �ִ��� ��ȯ�ϴ� �Լ��� �ۼ�
	����� �Է��� �޴� �κа� �ִ��� ����ϴ� �ڵ�� �ݵ�� ���� �Լ��� �и�
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