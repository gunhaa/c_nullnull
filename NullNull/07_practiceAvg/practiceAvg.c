#include <stdio.h>

int main(void) 
{
	/*
	����ڷκ��� �� ������ �Է¹޾� ����� ����ϴ� ������ �ۼ�
	�Է��� �ݵ�� scanf_s() �Լ��� ����ϰ�
	����� printf() �Լ��� �̿��� ��
	��հ� ��� �� �ݵ�� �Ҽ��� ��° �ڸ������� ǥ��
	input: �� ������ �Է��ϼ���.: 10 20
	output: AVG: 15.00
	*/
	int input1 = 0;
	int input2 = 0;

	scanf_s("%d", &input1);
	scanf_s("%d", &input2);

	printf("AVG: %.2f", ((double)input1+input2)/2);
}