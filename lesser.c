/*lesser.c -- 找出两个数中较小的*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int evill1, evill2;

	printf("Enter a pair of integers(q to quit):\n");
	while (scanf_s("%d %d", &evill1, &evill2) == 2)
	{
		printf("The lesser of %d and %d is %d. \n", evill1, evill2, imin(evill1, evill2));
		printf("Enter a pair of integers(q to quit):\n");
	}
	printf("Bye.\n");

	system("pause");
	return 0;
}

int imin(int n, int m)
{
	return n < m ? n : m;
}