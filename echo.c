/*echo.c -- �ظ�����*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;

	while ((ch = getchar()) != '#')
	{
		putchar(ch);
	}

	system("pause");
	return 0;
}