/*charcode.c -- 显示一个字符的编码值*/
#include <stdio.h>
int main(void)
{
	char ch;
	printf("Please enter a character.\n");
	scanf_s("%c", &ch);						/*用户输入字符*/
	printf("\aThe code for %c is %d.\n", ch, ch);

	getchar();
	getchar();
	return 0;
}