#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;
	
	// �ش� �ڵ��� ������ ã��
	// scanf�Լ��� \n �Է��� �޾ƾ� �������ȴ�
	// ������ gets_s�Լ��� ��� ���ۿ� �����ִ� �����ִٸ�(scanf�� ���� key \w)
	// �ٷ� ����Ǿ� ������ �����

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &nAge);
	// �ش� ������� �ذ� ����, %*c�� ���� ���۸� ����
	//scanf_s("%d%*c", &nAge);

	printf("�̸��� �Է��ϼ���: ");
	gets_s(szName, sizeof(szName));

	printf("%d�� �̸�: %s\n", nAge, szName);

	return 0;
}