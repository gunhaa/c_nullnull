#include <stdio.h>

typedef struct IOBUF_TEST
{
	// 현재 버퍼 포인터
	char* pCur;
	// 기준 포인터(idx = 0)
	char* pBase;
	// 버퍼 사이즈
	int bufSize;
} IOBUF_TEST;

void print_iobuf(IOBUF_TEST* pBuf)
{
	printf("Base: %p\n", pBuf->pBase);
	printf("Current: %p\n", pBuf->pCur);
	printf("Buffer Size: %d\n", pBuf->bufSize);
	printf("Written Size(zero to cur): %zd\n\n", pBuf->pCur - pBuf->pBase);
}

int main(void)
{
	FILE* fp = NULL;
	fopen_s(&fp, "CON", "w");

	print_iobuf((IOBUF_TEST*)fp);

	fputs("Hello", fp);
	print_iobuf((IOBUF_TEST*)fp);
	fputs("World", fp);
	print_iobuf((IOBUF_TEST*)fp);
	
	fclose(fp);
	return 0;
}