/*quotes.c -- 把字符串看作指针*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("%s,%p,%c\n", "We", "are", *"space farers");		//*"space farers" 指向's'
	system("pause");
	return 0;
}