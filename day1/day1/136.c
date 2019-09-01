#include<stdio.h>
#include<stdlib.h>

int singleNumber(int* nums, int numsSize)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i<numsSize; i++)
	{
		sum ^= nums[i];
	}
	return sum;
}

int main()
{
	int arr[] = { 1, 2, 3, 2, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = singleNumber(arr, len);
	printf("%d\n", ret);
	system("pause");
}