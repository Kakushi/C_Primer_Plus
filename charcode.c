/*charcode.c -- ��ʾһ���ַ��ı���ֵ*/
#include <stdio.h>
int main(void)
{
	char ch;
	printf("Please enter a character.\n");
	scanf_s("%c", &ch);						/*�û������ַ�*/
	printf("\aThe code for %c is %d.\n", ch, ch);

	getchar();
	getchar();
	return 0;
}