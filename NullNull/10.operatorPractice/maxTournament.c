#include <stdio.h>

int main(void)
{

	/*
	����ڷκ��� �Է� ���� ���� �� ���� ū ���� ���
	������ ��ȣ�� �ִ� 32��Ʈ ����
	scanf_s()�� �ѹ��� �� ���� ��� �Է�
	�ִ밪�� printf()���
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