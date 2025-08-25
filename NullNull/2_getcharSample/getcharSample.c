#include <stdio.h>

int main(void)
{
    // character도 결국 숫자, 범위의 차이이다
	char ch = 0;

	ch = getchar();

	// I/O Buffer에서 하나를 가져오는 함수
	// I/O Buffer는 Queue형태로 되어있어, 첫 입력값을 가져온다
	putchar(ch);
	putchar('Z');

	return 0;
}