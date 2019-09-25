

#include<stdlib.h>
#include<stdio.h>
int romanToInt(char * s){
	int nums[15] = { 0 };
	//十进制：十六进制：二进制
	nums[9] = 1;   //I
	nums[6] = 5;   //V
	nums[8] = 10;  //X
	nums[12] = 50;  //L
	nums[3] = 100; //C
	nums[4] = 500; //D
	nums[13] = 1000;//M
	for (unsigned char i = 0; s[i] != '\0'; i++) {
		if (nums[s[i] & 0xf] >= nums[s[i + 1] & 0xf])
			nums[1] += nums[s[i] & 0xf];
		else
			nums[1] -= nums[s[i] & 0xf];
	}
	return nums[1];
}

int main()
{
	char *s = 'V';
	printf("%d\n", romanToInt(s));
	system("pause");
	return 0;
}