
#include<stdio.h>
#include<stdlib.h>
char findTheDifference(char * s, char * t){
	int sums = 0;
	int sumt = 0;
	char *p = t;
	char *q = s;
	char result;
	while (*p != '\0'){
		sumt += *p;
		p++;
	}
	while (*q != '\0'){
		sums += *q;
		q++;
	}
	result = (char)sumt - sums;
	return result;
}

int main(){
	char s[] = "abcd";
	char t[] = "abcde";
	printf("%c\n", findTheDifference(s, t));
	system("pause");
	return 0;
}