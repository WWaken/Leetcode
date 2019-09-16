

#include<stdio.h>
#include<stdlib.h>
//µÝ¹é
//int climbStairs(int n){
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return climbStairs(n - 1) + climbStairs(n - 2);
//	}
//}
//·ÇµÝ¹é
int climbStairs(int n)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	if (n == 1)
	{
		return 1;
	}
	int i = 0;
	for (i = 3; i <= n;i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	return sum;
}

int main()
{
	int ret = climbStairs(2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//int main()
//{
//	printf("%d\n", fib(5));
//	system("pause");
//	return 0;
//}