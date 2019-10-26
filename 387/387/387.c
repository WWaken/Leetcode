
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int firstUniqChar(char * s){
	int len = strlen(s);
	int i = 0;
	if (len == 0)
	{
		return -1;
	}
	int table[26] = { 0 };
	for (i = 0; i < len; i++)
		table[s[i] - 'a']++;

	for (i = 0; i < len; i++){
		if (table[s[i] - 'a'] == 1)
			return i;
	}
	return -1;
}
int main()
{
	char *s = "yesyeah";
	printf("%d\n", firstUniqChar(s));
	system("pause");
	return 0;
}