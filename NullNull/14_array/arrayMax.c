#include <stdio.h>

int main(void)
{
	/*
	for���� ����� int[5] �迭�� ����� �� ��
	���� ū ���� ã�� ����ϴ� ���α׷��� �ۼ�
	�ִ밪�� ����� ������ int nMax�� ����
	*/
	int arr[5] = { 50, 40, 10, 50, 20 };
	int nMax;
	for (int i = 0; i < 5; ++i)
	{
		if (i == 0) {
			nMax = arr[i];
		}
		else {
			nMax = arr[i] > nMax ? arr[i] : nMax;
		}
	}

	printf("%d", nMax);
}