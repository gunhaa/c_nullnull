#include <stdio.h>

int main(void)
{
	// 해당 열 f9로 브레이크포인트 잡은 후 , f10으로 진행시켜 메모리의 변화 확인
	// 디버거를 이용할떄 F10을 통해 진행시킨 후, 변화 값을 빨간색이 된다
	char szName[32] = { 0 };
	printf("이름을 입력하세요: ");
	gets(szName);

	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다.");
	return 0;
}