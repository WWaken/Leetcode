
#include<stdio.h>
#include<stdlib.h>
int compress(char* chars, int charsSize)
{
	if (chars == NULL)
	{
		return 0;
	}
	int i = 0;
	int j = 0;
	for (i = 0; i < charsSize; i++)
	{

	}
}

int main()
{
	char chars[] = { 'a', 'b', 'b', 'c', 'c', 'c', 'c', 'c' };
	int sz = sizeof(chars) / sizeof(chars[0]);
	int ret=compress(chars, sz);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
