#include <stdio.h>

int main(void)
{
	/*
	����ڷκ��� ������ �ʸ� �Է¹޾�
	��:��:�� �������� ��� �� ���� ������ ���
	���ڸ� ������ ǥ���ϰ� ���ڸ� ������ ��� �տ� 0�� �ٿ�
	���
	*/
	int inputSeconds = 0;
	scanf_s("%d", &inputSeconds);

	int hours = inputSeconds / 3600;
	int minutes = (inputSeconds - (hours * 3600)) / 60;
	// ���� ������ �Ѵ�
	//int minutes = (inputSeconds % 3600 ) / 60;
	int seconds = inputSeconds % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", inputSeconds, hours
	, minutes, seconds);
}