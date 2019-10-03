
#include<stdio.h>
#include<stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int *num = (int*)malloc(sizeof(int) * (digitsSize + 1));
	num[0] = 1;
	int i;
	for (i = digitsSize - 1; i >= 0; i--){
		if (digits[i] == 9)
			digits[i] = 0;
		else{
			digits[i] += 1;
			break;
		}
	}
	*returnSize = (digits[0] == 0) ? (digitsSize + 1) : digitsSize;
	for (i = 0; i < digitsSize; i++){
		num[i + 1] = digits[i];
	}
	return (digits[0] == 0) ? num : digits;

}
int main()
{
	int num[] = { 1, 2, 3 };
	int i = 0;
	int *array;
	int len = sizeof(num) / sizeof(num[0]);
	int size = 10;
	array = plusOne(num, len, &size);
	for (i = 0; i < len; i++){
		printf("%d", array[i]);
	}
	system("pause");
	return 0;
}