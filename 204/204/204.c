


#include<stdio.h>
#include<stdlib.h>

int countPrimes(int n)
{
	//�ж�һ����n�ǲ�������������ȥ���Դ�2��ʼ������i��ȡģ��
	//��ģ��ֵΪ�㣬ֱ��������Ȼ�����ж�i��n�Ĵ�С��
	//���i<n,˵�������һ������������
	//���i=n;˵���������������
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