/*rows1.c -- 使用嵌套循环*/
#include <stdio.h>
#include <stdlib.h>
#define ROWS 6
#define CHARS 6
int main(void)
{
	int row;
	char ch;

	for ( row = 0; row < ROWS; row++)
	{
		for ( ch = 'A'; ch < ('A'+CHARS); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	//内部循环依赖于外部循环
	printf("\n");
	for ( row = 0; row < ROWS; row++)
	{
		for ( ch = ('A'+row); ch < ('A'+CHARS); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}