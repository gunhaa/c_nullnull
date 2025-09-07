#include <stdio.h>

int main(void)
{
	// 브레이킹 포인트로 확인
	// F10 -> 다음줄 진행
	// alt 8 로 디스어셈블 모드
	// 실행할때마다 nData의 주소는 다르게 나온다
	// ASLR 때문이다
	// 운영체제의 보안때문에 Address Space Layout Random으로 결정하기 때문이다
	// 실행할때마다 바꿔야 함부로 조작을 못하기 때문
	int nData = 10;
	printf("%s\n", "nData");
	printf("%d\n", nData);
	printf("%p\n", &nData);
	int* nDataPointer = &nData;
	return 0;
}