

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int lengthOfLastWord(char * s)
{
	int len = strlen(s);
	int i = 0;
	int count = 0;
	for (i = len-1; i >= 0; i--){
		if (s[i] != ' '){
			count++;
		}
		else if (count > 0){
			return count;
		}
	}
	return count;
}
int main()
{
	char str[] = "Hello World";
	int ret = lengthOfLastWord(str);
	printf("%d\n", ret);
	system("pause");
	return 0;
}