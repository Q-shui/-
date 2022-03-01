#include <stdio.h>

int MoreThanHalfNum_Solution(int* numbers, int numbersLen) {
	// write code here
	int num[10000] = { 0 };
	int max = 0;
	int maxnum = 0;

	for (int i = 0; i < numbersLen; ++i) {

		num[numbers[i]]++;
		if (num[numbers[i]] > maxnum) {

			max = numbers[i];
			maxnum = num[numbers[i]];
		}
	}

	return max;
}

int main() {

	int a[] = { 1,2,3,2,2,2,5,4,2 };

	printf("%d\n", MoreThanHalfNum_Solution(a, sizeof(a) / sizeof(a[0])));

	return 0;
}