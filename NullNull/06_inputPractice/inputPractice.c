#include <stdio.h>

int main(void)
{
	char inputName[32] = { 0 };
	int inputAge = 0;

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d%*c", &inputAge);

	printf("�̸��� �Է��ϼ���: ");
	gets_s(inputName, sizeof(inputName));

	printf("����� ���̴� %d���̰� �̸��� '%s'�Դϴ�.", inputAge, inputName);

	return 0;
}