#include <stdio.h>

int main(void)
{
	/*
	����ڷκ��� �Է� ���� ���� �� ���� ū ���� ����ϴ� ���α׷��� �ۼ�
	������ ��ȣ�� �ִ� 32��Ʈ ������ �����ϸ�, scanf_s() �Լ��� �� ���� �� ���� �Է¹ް�
	���������� �ִ밪�� ��� �����ϴ� ������ �ۼ�
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