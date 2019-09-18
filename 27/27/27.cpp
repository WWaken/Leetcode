

#include<stdio.h>
#include<stdlib.h>

int removeElement(int* nums, int numsSize, int val)
{
	if (numsSize == 0)
	{
		return 0;
	}
	if (nums == 0)
	{
		return 0;
	}
	int i = 0;
	int j = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] != val)
		{
			nums[j] = nums[i];
			j++;
		}
	}
	return j;
}

int main()
{
	int nums[] = { 1, 2, 3, 2 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int ret= removeElement(nums, numsSize, 2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}