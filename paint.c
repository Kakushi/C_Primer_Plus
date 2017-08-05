/*paint.c -- 使用条件运算符*/
#include <stdio.h>
#include <stdlib.h>
#define COVERAGE 200		/*每罐油漆可喷的平方英尺数*/
int main(void)
{
	int sq_feet;
	int cans;

	printf("Enter number of square  feet to be painted:\n");
	while (scanf_s("%d",&sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
		printf("Enter next valuse(q to quit):\n");
	}

	system("pause");
	return 0;
}