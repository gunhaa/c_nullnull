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
	�� char[]�� �ּҸ� �Ű������� �޾� ���ڿ��� DeepCopy�ϴ� Mystrcpy()�Լ��� �ۼ�
	�Լ��� �� ��° �Ű������� ù ��° �Ű������� �޸� ũ�Ⱑ �ǵ��� ����
	*/
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };
	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	return 0;
}