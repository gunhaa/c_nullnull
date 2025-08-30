#include <stdio.h>

int main(void)
{
	/*
	사용자로부터 정수로 초를 입력받아
	시:분:초 형식으로 출력 시 분초 정보는 모두
	두자리 정수로 표시하고 한자리 숫자의 경우 앞에 0을 붙여
	출력
	*/
	int inputSeconds = 0;
	scanf_s("%d", &inputSeconds);

	int hours = inputSeconds / 3600;
	int minutes = (inputSeconds - (hours * 3600)) / 60;
	// 같은 동작을 한다
	//int minutes = (inputSeconds % 3600 ) / 60;
	int seconds = inputSeconds % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", inputSeconds, hours
	, minutes, seconds);
}