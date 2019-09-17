

#include<stdio.h>
#include<stdlib.h>

int removeDuplicates(int* nums, int numsSize)
{
	if (numsSize <= 1)
	{
		return numsSize;
	}
	int i = 0;
	int j = 1;
	while (j < numsSize)
	{
		if (nums[i] == nums[j])
		{
			j++;
		}
		else
		{
			i++;
			nums[i] = nums[j];
			j++;
		}
	}
	return i+1;
}

int main()
{
	int nums[] = { 1, 1, 2 ,2,3};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int ret=removeDuplicates(nums, numsSize);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
