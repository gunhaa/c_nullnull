#include <stdio.h>

int main(void)
{
	/*
	for���� ����� int[5][5] �迭�� ������ ����
	�����ϴ� ���α׷��� �ۼ�
	1 2 3 4 5
	10 9 8 7 6
	11 12 13 14 15
	20 19 18 17 16
	21 22 23 24 25
	*/
	int arr[5][5] = { 0 };
	int cnt = 0;
	//for (int i = 0; i < 5; ++i) {
	//	for (int j = 0; j < 5; ++j) {
	//		if (i % 2 == 0) {
	//			arr[i][j] = ++cnt;
	//		}
	//		else {
	//			arr[i][j] = cnt--;
	//		}
	//	}
	//	cnt += 5;
	//}

	int flag = 1;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (flag) {
				arr[i][j] = ++cnt;
			}
			else {
				arr[i][4 - j] = ++cnt;
			}
		}
		flag = !flag;
	}

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}