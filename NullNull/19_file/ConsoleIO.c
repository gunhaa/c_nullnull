#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;

	// ���±��� ����ߴ� console output�� ��� file�� �̿��� output�̴�
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