/*sweetie.c -- 一个计数循环*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const int NUMBER = 22;
	int count = 1;

	printf("使用while循环\n");
	while (count<=NUMBER)
	{
		printf("Be my Valentine!\n");
		count++;
	}

	printf("\n使用for循环\n");
	for ( count = 1; count <= NUMBER; count++)
	{
		printf("Be my Valentine!\n");
	}

	system("pause");
	return 0;
}