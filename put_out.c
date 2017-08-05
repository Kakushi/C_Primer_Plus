/*put_out.c -- 字符串输出*/
#include <stdio.h>
#include <stdlib.h>
#define DEF "I am a #defined string."
void put(const char * string);
int	main(void)
{
	char str1[80] = "An array was initialized to me.";
	const char * str2 = "A pointer was initialized to me.";

	printf("use puts()\n");					//自动添加'\n'
	puts("I'm an argument to puts().");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);
	puts(str2 + 2);

	printf("\nuse fputs()\n");				//增添第二个参数
	fputs("I'm an argument to fputs().", stdout);
	fputs(DEF,stdout);
	fputs(str1, stdout);
	fputs(str2, stdout);
	fputs(&str1[5], stdout);
	fputs(str2 + 2, stdout);

	printf("\nuse printf()\n");
	printf("I'm an argument to printf().");
	printf(DEF);
	printf(str1);
	printf(str2);
	printf(&str1[5]);
	printf(str2 + 2);

	put("\n自定义字符串输出函数\n");
	put("I'm an argument to printf().");
	put(DEF);
	put(str1);
	put(str2);
	put(&str1[5]);
	put(str2 + 2);


	system("pause");
	return 0;
}

void put(const char * string)
{
	while (*string != '\0')
	{
		putchar(*string++);
	}
}