
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int comp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}
int abs(int x)
{
	if (x > 0) {
		return x;
	}
	else {
		return -x;
	}
}
int threeSumClosest(int* nums, int numsSize, int target){
	qsort(nums, 10, sizeof(int), comp);
	int ans = nums[0] + nums[1] + nums[2];
	for (int i = 0; i < numsSize - 2; i++){
		int start = i + 1;
		int end = numsSize - 1;
		while (start < end){
			int sum = nums[i] + nums[start] + nums[end];
			if (abs(target - ans) > abs(target - sum)){
				ans = sum;
			}
			if (sum > target){
				end--;
			}
			else if (sum < target){
				start++;
			}
			else{
				return ans;
			}
		}
	}
	return ans;
}
int main()
{
	int arr[] = { -1, 0, 1, 2, -1, -4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = threeSumClosest(arr, sz,0);
	printf("%d ", ret);
	system("pause");
	return 0;
}


