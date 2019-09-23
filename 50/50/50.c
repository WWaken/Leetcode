

#include<stdio.h>
#include<stdlib.h>
double pow(double x, int n)
{
    unsigned int y = (unsigned int)labs((long)n), bit = 0x80000000;
    while(bit){
        if(y & bit){
            break;
        }
        bit >>= 1;
    }
    
    double res = 1.0;
    while(bit){
        if(y & bit){
            res = res * res * x;
        }else{
            res = res * res;
        }
        bit >>= 1;
    }
	return n > 0 ? res : 1 / res;
}
int main()
{
	double x = 2.0;
	int n = -2;
	printf("%lf\n", pow(x, n));
	system("pause");
	return 0;
}