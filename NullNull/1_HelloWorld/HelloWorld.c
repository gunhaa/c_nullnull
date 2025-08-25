// 컴파일 전처리기
// 선언 + 정의
// 선언 = ~가 존재한다(색인)
// 정의 = 선언한 것이 ~ 이다(색인의 내용 디테일, implementation)
// 이것을 분리시키거나, 한번에 이루어진다
// .h (헤더), 선언에 해당하는 코드를 모두 넣은 것
#include <stdio.h>

// visual studio 에서 cpp 설정한 후 c로 만들어야함
// .c 확장자를 통해 c파일로 인식시키고, 컴파일 시킬 수 있음


//반환형, 이름(매개변수)
int main(void)
{
	// 문자(배)열, Escape
	printf("Hello World\n");
	return 0;
}
