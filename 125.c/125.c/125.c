
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isPalindrome(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;
	while (i < j)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
		if ((s[i] < '0' || s[i] > '9') && (s[i] < 'a' || s[i] > 'z'))
		{
			i++;
			continue;
		}
		if (s[j] >= 'A' && s[j] <= 'Z')
		{
			s[j] += 32;
		}
		if ((s[j] < '0' || s[j] > '9') && (s[j] < 'a' || s[j] > 'z'))
		{
			j--;
			continue;
		}

		if (s[i] != s[j])
		{
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

	int main()
	{
		char *str = "A man, a plan, a canal : Panama";
		printf("%d\n", isPalindrome(str));
		system("pause");
		return 0;
	}