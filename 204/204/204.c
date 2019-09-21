


#include<stdio.h>
#include<stdlib.h>

int countPrimes(int n)
{
	//判断一个数n是不是质数，用它去除以从2开始的奇数i，取模。
	//若模的值为零，直接跳出，然后来判断i与n的大小。
	//如果i<n,说明这个数一定不是素数。
	//如果i=n;说明这个数是素数。
	int i = 0;
	int count = 0;
	for (i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			if (i%j == 0){
				if (i == n){
					count++;
				}
			}
		}
	}
	return count;
}

int main()
{
	int n = 10;
	printf("%d\n", countPrimes(n));
	system("pause");
	return 0;
}