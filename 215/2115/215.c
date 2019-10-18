

#include<stdio.h>
#include<stdlib.h>


int Partion(int *arr, int left, int right)
{
	int tmp = arr[left];
	while (left < right)
	{
		while (left < right && arr[right] >= tmp){
			right--;
		}
		if (left >= right){
			//arr[left] = tmp;
			break;
		}
		else{
			arr[left] = arr[right];
		}
		while (left < right && arr[left] <= tmp){
			left++;
		}
		if (left >= right){
			arr[right] = tmp;
			break;
		}
		else{
			arr[right] = arr[left];
		}
	}
	arr[left] = tmp;
	return left;
}
void quickSort(int nums, int left, int right){
	int q = 0;
	if (left < right){
		q = Partion(nums, left, right);
		quickSort(nums, left, q - 1);
		quickSort(nums, q + 1, right);
	}
}
int main(){
	int nums[] = { 3, 2, 4, 5, 32, 7, 19 };
	int i = 0;
	int left = 0;
	int len = sizeof(nums) / sizeof(nums[0]);
	int right = len - 1;
	quickSort(nums, left, right);
	for (i = 0; i < len; i++){
		printf("%d ", nums[i]);
	}
	system("pause");
	return 0;
}
