


#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i = 0;
	int j = numsSize - 1;
	int* res = (int *)malloc(2 * sizeof(int));
	for (i = 0; i < numsSize; i++)
	{
		for (j = numsSize - 1; j > 0; j--)
		{
			if (nums[i] + nums[j] == target)
			{
				res[0] = i;
				res[1] = j;
				return res;
			}
		}
	}
	return res;
}

int main()
{
	int arr[4] = { 2, 3, 4, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d %d", twoSum(arr, len, 6,2));
	system("pause");
	return 0;
}