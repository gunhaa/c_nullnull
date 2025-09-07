#include <stdio.h>

int main(void)
{
	/*
	for문을 사용해 int[5] 배열에 저장된 값 중 가장
	작은 값을 찾아 출력하는 프로그램을 작성. int[0]
	요소에 최솟값이 저장될 수 있도록 개발. 각 배열 요소를
	비교하는 과정에서 두 배열 요소의 값은 덮어써서
	사라지지 않도록 교환
	*/
	int arr[5] = { 3, 4, 5, 1, 2 };

	for (int i = 0; i < 5; ++i) {
		if (arr[0] > arr[i]) {
			int temp = arr[0];
			arr[0] = arr[i];
			arr[i] = temp;
		}
	}
	printf("%d", arr[0]);
}