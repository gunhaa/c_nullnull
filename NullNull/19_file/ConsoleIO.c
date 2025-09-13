#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;

	// 여태까지 사용했던 console output은 사실 file을 이용한 output이다
	fopen_s(&fp, "CON", "w");

	fputs("Helo, world1\n", fp);
	fflush(stdout);
	puts("Hello, world2\n");
	fputs("Hello world3\n", stdout);


	FILE* fp2 = NULL;
	fopen_s(&fp2, "CON", "r");

	char szBuffer[32] = { 0 };

	fgets(szBuffer, sizeof(szBuffer), fp2);
	fputs(szBuffer, stdout);
	fflush(stdout);

	fclose(fp);
	return 0;
}