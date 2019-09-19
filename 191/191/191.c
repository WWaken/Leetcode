

#include<stdio.h>
#include<stdlib.h>

int hammingWeight(unsigned int n)
{
	int res = 0;
	while (n)
	{
		res++;
		n &= (n - 1);
	}
	return res;
}

int main()
{
	unsigned int n = 5;
	printf("%d\n", hammingWeight(n));
	system("pause");
	return 0;
}