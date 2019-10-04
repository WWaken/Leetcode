

#include<stdio.h>
#include<stdlib.h>
void sortColors(int* nums, int numsSize){
	int i, j, *p = nums;
	int count[3] = { 0, 0, 0 };
	for (i = 0; i<numsSize; i++){
		count[nums[i]]++;
	}
	for (j = 0; j < 3; j++){
		for (i = 0; i < count[j]; i++){
			*p++ = j;
		}
	}
}
int main()
{
	int arr[] = { 2, 2, 1, 0, 1 ,1};
	int len = sizeof(arr) / sizeof(arr[0]);
	sortColors(arr, len);
	int i = 0;
	for (i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}