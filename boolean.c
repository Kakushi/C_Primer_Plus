/*boolean.c -- 使用_Bool变量*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	long num;
	long sum = 0L;
	_Bool input_is_good;
	printf("Please enter an integer to be summed.");
	printf("(非整数退出):");
	input_is_good = (scanf_s("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer(非整数退出):");
		input_is_good = (scanf_s("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld.\n", sum);

	system("pause");
	return 0;
}