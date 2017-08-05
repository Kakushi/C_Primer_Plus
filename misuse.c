/*misuse.c -- 取最大值 旧时函数*/
#include <stdio.h>
#include <stdlib.h>
int imax();		/*旧时的函数声明*/
int main(void)
{
	int evill1, evill2;
	
	printf("Enter a pair of integers(q to quit): \n");
	while (scanf_s("%d %d", &evill1,&evill2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n", evill1, evill2, imax(evill1, evill2));
		printf("Enter a pair of integers(q to quit):\n");
	}
	printf("Bye.\n");

	system("pause");
	return 0;
}

int imax(n, m)
int n, m;
{
	return m > n ? m : n;
}