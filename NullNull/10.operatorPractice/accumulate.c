#include <stdio.h>

int main(void)
{
	/*
	����ڷκ��� �� ������ �Է� �޾� ������ ���
	����� �Է��� ����Ǵ� ���� �ϳ��� ���� �����ϴ�
	���� �ϳ��� ����� ����
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