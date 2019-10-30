
#include<stdio.h>
#include<stdlib.h>
int singleNumber(int * nums, int numsSize) {
	int a, b, i, x;
	a = b = 0;
	for (i = 0; i != numsSize; ++i) {
		x = nums[i];
		a = a ^ x;
		b = b ^ (a & x);
		a = a ^ (b & x);
	}

	return b;
}
int main()
{
	int arr[] = { 3, 2, 4, 3, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", singleNumber(arr, len));
	system("pause");
	return 0;
}