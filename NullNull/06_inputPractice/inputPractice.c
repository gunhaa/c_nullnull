#include <stdio.h>

int main(void)
{
	char inputName[32] = { 0 };
	int inputAge = 0;

	printf("나이를 입력하세요: ");
	scanf_s("%d%*c", &inputAge);

	printf("이름을 입력하세요: ");
	gets_s(inputName, sizeof(inputName));

	printf("당신의 나이는 %d살이고 이름은 '%s'입니다.", inputAge, inputName);

	return 0;
}