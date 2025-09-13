#include <stdio.h>

void TestFunc(int a, int b)
{
	int c = 20;
	a = 10;
}

int main(int argc, char* argv[])
{
	int data = 1;
	TestFunc(5, 10);
	return 0;
}