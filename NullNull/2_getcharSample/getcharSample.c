#include <stdio.h>

int main(void)
{
    // character�� �ᱹ ����, ������ �����̴�
	char ch = 0;

	ch = getchar();

	// I/O Buffer���� �ϳ��� �������� �Լ�
	// I/O Buffer�� Queue���·� �Ǿ��־�, ù �Է°��� �����´�
	putchar(ch);
	putchar('Z');

	return 0;
}