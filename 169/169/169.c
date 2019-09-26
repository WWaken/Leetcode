

#include<stdio.h>
#include<stdlib.h>

int majorityElement(int* nums, int numsSize)
{
	int i = 0;
	int count = 0;
	int key = nums[0];
	for (i = 0; i < numsSize; i++){
		if (nums[i] == key){
			count++;
		}
		else{
			count--;
		}
		if (count <= 0){
			key = nums[i + 1];
		}
	}
	return key;
}

int main()
{
	int arr[] = { 2, 2, 1, 1, 1, 2, 2 };
	int numsSize = sizeof(arr) / sizeof(arr[0]);
	int ret = majorityElement(arr, numsSize);
	printf("%d\n", ret);
	system("pause");
	return 0;
}