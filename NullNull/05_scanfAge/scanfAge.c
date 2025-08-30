#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;
	
	// 해당 코드의 문제점 찾기
	// scanf함수는 \n 입력을 받아야 중지가된다
	// 하지만 gets_s함수의 경우 버퍼에 남아있는 것이있다면(scanf의 종료 key \w)
	// 바로 종료되어 문제가 생긴다

	printf("나이를 입력하세요: ");
	scanf_s("%d", &nAge);
	// 해당 방식으로 해결 가능, %*c를 통해 버퍼를 비운다
	//scanf_s("%d%*c", &nAge);

	printf("이름을 입력하세요: ");
	gets_s(szName, sizeof(szName));

	printf("%d세 이름: %s\n", nAge, szName);

	return 0;
}