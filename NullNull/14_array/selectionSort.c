#include <stdio.h>

int main(void)
{
	/*
	for���� ����� int[5] �迭�� ����� ������
	������������ �����ϴ� ���α׷��� �ۼ�
	���� ����� �������� �˰����� ���
	*/

	int arr[5] = { 3,5,1,2,4 };

	for(int i = 0; i < 5; ++i) {
		int minIdx = i;
		for (int j = i + 1; j < 5; ++j) {
			if (arr[minIdx] > arr[j]) {
				minIdx = j;
			}
		}
		// swap
		if (minIdx != i) {
			int temp = arr[minIdx];
			arr[minIdx] = arr[i];
			arr[i] = temp;
		}
	}

	for (int i = 0; i < 5; ++i) {
		printf("%d", arr[i]);
	}
}