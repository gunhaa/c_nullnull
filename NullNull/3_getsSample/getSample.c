#include <stdio.h>

int main(void)
{
	// �ش� �� f9�� �극��ũ����Ʈ ���� �� , f10���� ������� �޸��� ��ȭ Ȯ��
	// ����Ÿ� �̿��ҋ� F10�� ���� �����Ų ��, ��ȭ ���� �������� �ȴ�
	char szName[32] = { 0 };
	printf("�̸��� �Է��ϼ���: ");
	gets(szName);

	printf("����� �̸��� ");
	puts(szName);
	puts("�Դϴ�.");
	return 0;
}