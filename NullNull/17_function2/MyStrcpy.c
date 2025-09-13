#include <stdio.h>

void MyStrcpy(char* cpy, unsigned int cpySize, char* source);

void MyStrcpy(char* cpy, unsigned int cpySize, char* source) 
{

	size_t nLenSrc = 0;
	nLenSrc = strlen(source);

	for (int i = 0; i < cpySize; ++i) {
		cpy[i] = source[i];
	}
}

int main(int argc, char* argv[])
{
	/*
	두 char[]의 주소를 매개변수로 받아 문자열을 DeepCopy하는 Mystrcpy()함수를 작성
	함수의 두 번째 매개변수는 첫 번째 매개변수의 메모리 크기가 되도록 구현
	*/
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };
	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	return 0;
}