

#include<stdio.h>
#include<stdlib.h>
void rotate(int* nums, int numsSize, int k){
	int i = 0;
	int tmp = 0;
	int j = 0;
	k %= numsSize;//ֻ��Ҫ��תС��numsSize�ĳ���
	for (i = 0, j = numsSize - 1 - k; i<j; i++, j--)//��ǰ�벿������
	{
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
	for (i = numsSize - k, j = numsSize - 1; i<j; i++, j--)//�Ժ�벿������
	{
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
	for (i = 0, j = numsSize - 1; i<j; i++, j--)//��������������
	{
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	rotate(arr, sz, 2);
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}