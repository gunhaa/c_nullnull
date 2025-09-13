#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	fopen_s(&fp, "TEST.txt", "w+");
	if (fp == NULL)
	{
		puts("ERROR: Failed to open file!");
		return;
	}

	// FILE I/O
	// BLOCKING
	// result: 7byte
	// 48 45 4C 4C 4F 0D 0A
	// 0D 0A 는 \r \n 이다
	// 예전에는 \n은 수직으로 내려가기만하고 앞으로가지 않아서
	// 두개 모두 적었어야했던 과거의 잔재이다
	fprintf(fp, "%s\n", "HELLO");

	fclose(fp);
	return 0;
}