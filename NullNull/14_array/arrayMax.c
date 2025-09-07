#include <stdio.h>

int main(void)
{
	/*
	for문을 사용해 int[5] 배열에 저장된 값 중
	가장 큰 값을 찾을 출력하는 프로그램을 작성
	최대값이 저장된 변수는 int nMax로 선언
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