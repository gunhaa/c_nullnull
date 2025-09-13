#include <stdio.h>

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];

	struct USERDATA* pNext;
} USERDATA;


void PrintListRecursive(USERDATA* curUser);

void PrintListRecursive(USERDATA* curUser)
{
	if (curUser == NULL) {
		return;
	}

	printf("%s, %s\n", curUser->szName, curUser->szPhone);

	PrintListRecursive(curUser->pNext);
	return;
}

int main(void)
{
	USERDATA userList[4] = {
		{"±èµÎ½Ä", "1234", NULL},
		{"ÀÌ¹ÌÇö", "2345", NULL},
		{"±èºÀ¼®", "3456", NULL},
		{"ÀåÈñ¼ö", "4567", NULL}
	};

	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];
	userList[3].pNext = NULL;

	USERDATA* curUser = &userList[0];

	PrintListRecursive(curUser);

	return 0;
};