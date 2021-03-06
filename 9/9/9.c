
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isPalindrome(int x)
{
	if (x < 0 || (x % 10 == 0 && x != 0))
	{
		return false;
	}
	int num = 0;
	while (x>num)
	{
		num = 10 * num+ x % 10;
		x /= 10;
	}
	return x == num || x == num / 10;
}

int main()
{
	printf("%d\n", isPalindrome(-7));
	system("pause");
	return 0;
}