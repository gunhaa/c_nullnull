#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pList = NULL;
	pList = (int*)malloc(sizeof(int) * 3);
	// c에서 [] 연산자는 [] 연산자는 사실 포인터 연산 + 간접 참조(dereference)를
	// 편하게 쓰는 문법적 설탕이다
	// aList[i] 는 *(pList + i)를 의미한다

	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	// 빌드타임에 문제 없이 작동한다
	// 하지만 명확한 메모리 규칙 위반
	// Canary bit(fdfdfd..)를 건드리기 때문에 free시점에 잘못된 것을 알게되고, 에러를 반환한다
	// pList[3] = 0xFDFDFDFD 를 할당하면, 문제가 생기지 않는다
	// C언어와 메모리 동적 할당이 어려운 이유이다
	pList[3] = 40;

	for (int i = 0; i < 3; ++i) {
		printf("%d\n", pList[i]);
	}

	free(pList);
	return 0;
}