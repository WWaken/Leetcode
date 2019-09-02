#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverseString(char* s, int sSize)
{
	if (s == NULL )
	{
		return;
	}
	if (sSize <= 0)
	{
		return;
	}
	int i = 0;
	int j = sSize-1;
	while (i < j)
	{
		char tmp=s[i];
		s[i]=s[j];
		s[j]=tmp;
		i++;
		j--;
	}
}
int main()
{
	char str[] = "hello";
	int len = strlen(str);
	reverseString(str, len);
	printf("%s\n", str);
	system("pause");
	return 0;
}