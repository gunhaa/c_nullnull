#include <stdio.h>

int main(void)
{
	int arr[5] = {1,5,3,4,2};

	for (int i = 0; i < 5; ++i) {
		for (int j = i+1; j < 5; ++j) {
			// swap
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


	for (int i = 0; i < 5; ++i) {
		printf("%d", arr[i]);
	}
}