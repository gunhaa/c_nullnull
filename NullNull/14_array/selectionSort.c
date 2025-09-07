#include <stdio.h>

int main(void)
{
	/*
	for문을 사용해 int[5] 배열에 저장된 값들을
	오름차순으로 정렬하는 프로그램을 작성
	정렬 방식은 선택정렬 알고리즘을 사용
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