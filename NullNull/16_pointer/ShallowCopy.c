#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	// c���� �ش� ����� ����ϸ�
	// pszData�� �Ҵ�� �����͸� �Ұ�, szBuffer�� �����ͷ�
	// ��ġ�� �Ű��� malloc�� �����ʹ� ���ǵȴ�
	// free�� �����ʾ� ������ �߻����� �ʴ´�
	
	//pszData = &szBuffer;

	// szBuffer�� �迭�̸�, ù ���� �ּҸ� ����Ų��
	pszData = szBuffer;
	puts(pszData);
	return 0;
}