
#include<stdio.h>
#include<stdlib.h>
int searchInsert(int* nums, int numsSize, int target){
	int left = 0;
	int right = numsSize-1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (target > nums[mid]){
			left = mid + 1;
		}
		else if (target < nums[mid]){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
	return left;
}

int main()
{
	int arr[] = { 1, 3, 5, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", searchInsert(arr, len, 2));
	system("pause");
	return 0;
}