#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pList = NULL;
	pList = (int*)malloc(sizeof(int) * 3);
	// c���� [] �����ڴ� [] �����ڴ� ��� ������ ���� + ���� ����(dereference)��
	// ���ϰ� ���� ������ �����̴�
	// aList[i] �� *(pList + i)�� �ǹ��Ѵ�

	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	// ����Ÿ�ӿ� ���� ���� �۵��Ѵ�
	// ������ ��Ȯ�� �޸� ��Ģ ����
	// Canary bit(fdfdfd..)�� �ǵ帮�� ������ free������ �߸��� ���� �˰Եǰ�, ������ ��ȯ�Ѵ�
	// pList[3] = 0xFDFDFDFD �� �Ҵ��ϸ�, ������ ������ �ʴ´�
	// C���� �޸� ���� �Ҵ��� ����� �����̴�
	pList[3] = 40;

	for (int i = 0; i < 3; ++i) {
		printf("%d\n", pList[i]);
	}

	free(pList);
	return 0;
}