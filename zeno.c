/*zeno.c -- ÐòÁÐµÄºÍ*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int	t_ct;
	double time, x;
	int limit;

	printf("Enter the number of term you want:");
	scanf_s("%d", &limit);
	for ( time = 0, x=1, t_ct=1; t_ct <= limit; t_ct++, x*=2.0)
	{
		time += 1.0 / x;
		printf("time = %lf when terms = %d.\n", time, t_ct);
	}

	system("pause");
	return 0;
}