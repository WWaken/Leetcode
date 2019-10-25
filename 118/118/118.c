

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
	*returnSize = numRows;
	*returnColumnSizes = (int *)malloc(sizeof(int)*numRows);//returnColumnSizes�����������ÿһ��Ԫ�صĸ���
	int** res = (int**)malloc(sizeof(int*)*numRows);

	for (int i = 0; i < numRows; i++) {
		(*returnColumnSizes)[i] = i + 1;
		res[i] = (int*)malloc(sizeof(int)*(i + 1));
		res[i][0] = 1;
		res[i][i] = 1;
		for (int j = 1; j < i; j++) {
			res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
		}
	}
	return res;
}