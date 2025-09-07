#include <stdio.h>

int main(void)
{
	int aList[5] = { 0 };

	printf("aList[0]: %d\n", aList[0]);
	//printf("aList[5]: %d", aList[5]);
	int* pnData = aList;
	
	*pnData = 30;
	printf("aList[0]: %d\n", aList[0]);
	printf("pnData[0]: %d\n", pnData[0]);

	return 0;
}