#include <stdio.h>
#include <string.h>

int main(void)
{
	char charArr[] = { "Hello" };
	char *charArrp = &charArr;

	while (*charArrp != '\0') {
		printf("%c\n", *charArrp);
		charArrp++;
	}
	char newCharArr[6] = { 0 };

	// java�� �ٸ��� ������ ������ ������� �ʴ´�
	// newCharArr = charArr;

	printf("------\n");

	memcpy(newCharArr, charArr, 6);
	char* newCharArrp = &newCharArr;

	while (*newCharArrp != '\0') {
		printf("%c\n", *newCharArrp);
		newCharArrp++;
	}

	return 0;
}