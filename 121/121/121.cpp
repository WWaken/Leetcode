#include<stdio.h>
#include<stdlib.h>
#include<String.h>
int maxProfit(int* prices, int pricesSize){
	if (prices == NULL  || pricesSize <= 0)
		return 0;

	int max = 0, min = prices[0];
	for (int i = 1; i < pricesSize; i++) {
		if (prices[i] - min > max)
			max = prices[i] - min;
		if (prices[i] < min)
			min = prices[i];
	}
	return max;
}