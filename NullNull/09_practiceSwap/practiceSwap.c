#include <stdio.h>

int main(void)
{
	/*
	�� ������ ���� ��ȯ�ϴ� �ڵ带 �ۼ�, ����ڷ� ����
	������ �Է� �޾� ���� int a,b�� �����ϰ�
	�ӽ� ���� tmp�� ���� a,b�� ���� ��ȯ�� �� ����ϴ�
	���α׷��� �ۼ�
	*/

	int a = 0;
	int b = 0;

	scanf_s("%d%d", &a, &b);

	int temp = b;
	b = a;
	a = temp;
	printf("a:%d, b:%d", a, b);
}