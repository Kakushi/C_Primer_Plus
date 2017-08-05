/*summing.c -- 对用户输入的整数求和*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	long num;
	long sum = 0L;							//把sum初始化为零
	
	printf("Please enter an integer to be summed.");
	printf("(非整数退出):");
	while (scanf_s("%ld",&num) == 1)		//==的意思是“等于”
	{
		sum = sum + num;
		printf("Please enter next integer（非整数退出）:");
	}
	printf("Those integers sum to %ld.\n", sum);

	system("pause");
	return 0;
}