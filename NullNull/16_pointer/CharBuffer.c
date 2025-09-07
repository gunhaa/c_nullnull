#include <stdio.h>

int main(void)
{
	// 디버거를 통해 메모리를 보는 것이 이해에 좋다
	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;

	while (*pszData != '\0') {
		pszData++;
	}

	printf("&pszData: %p, &szBuffer: %p \n", pszData, szBuffer);
	printf("Length: %d\n", pszData - szBuffer);
}