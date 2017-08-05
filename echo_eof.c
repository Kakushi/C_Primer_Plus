/*echo_eof.c -- 重复输入，知道文件的结尾*/
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