#include <stdio.h>

int main(void)
{
	// �극��ŷ ����Ʈ�� Ȯ��
	// F10 -> ������ ����
	// alt 8 �� �𽺾���� ���
	// �����Ҷ����� nData�� �ּҴ� �ٸ��� ���´�
	// ASLR �����̴�
	// �ü���� ���ȶ����� Address Space Layout Random���� �����ϱ� �����̴�
	// �����Ҷ����� �ٲ�� �Ժη� ������ ���ϱ� ����
	int nData = 10;
	printf("%s\n", "nData");
	printf("%d\n", nData);
	printf("%p\n", &nData);
	int* nDataPointer = &nData;
	return 0;
}