#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	// c에서 해당 방식을 사용하면
	// pszData는 할당된 포인터를 잃고, szBuffer의 포인터로
	// 위치가 옮겨져 malloc된 데이터는 유실된다
	// free도 되지않아 오류도 발생하지 않는다
	
	//pszData = &szBuffer;

	// szBuffer는 배열이며, 첫 원소 주소를 가르킨다
	pszData = szBuffer;
	puts(pszData);
	return 0;
}