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
	// 0D 0A �� \r \n �̴�
	// �������� \n�� �������� �������⸸�ϰ� �����ΰ��� �ʾƼ�
	// �ΰ� ��� ��������ߴ� ������ �����̴�
	fprintf(fp, "%s\n", "HELLO");

	fclose(fp);
	return 0;
}