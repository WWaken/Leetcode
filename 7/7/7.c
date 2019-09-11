

#include<stdio.h>
#include<stdlib.h>

int Reverse(int n)
{
	int max = INT_MAX;
	int min = INT_MIN;
	long result = 0;
	ÊµÏÖÄæÖÃ
		while (n != 0)
		{
		result = result * 10 + n % 10;
		n /= 10;
		}
	ÅÐ¶ÏÒç³ö
		if ((result > max) || (result < min))
		{
		return 0;
		}
		else
		{
			return result;
		}
}

int main()
{
	int n = 2147483647;
	int ret = reverse(n);
	printf("%d", ret);
	system("pause");
	return 0;
}