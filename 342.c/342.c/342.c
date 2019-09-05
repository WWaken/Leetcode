

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isPowerOfFour(int num)
{
	if (num < 0 || num & (num - 1))
	{
		return false;
	}
	return num % 3 == 1;
}

int main()
{
	printf("%d\n", 5);
	system("pause");
	return 0;
}