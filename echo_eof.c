/*echo_eof.c -- �ظ����룬֪���ļ��Ľ�β*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	//system("pause");
	return 0;
}