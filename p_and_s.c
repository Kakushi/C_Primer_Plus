/*p_and_s -- 指针和字符串*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char * mesg = "Don't be a fool!";
	char * copy;

	copy = mesg;							//字符串本身未被复制
	printf("%s\n", copy);
	printf("mesg = %s; &mesg = %p; valuse = %p\n", mesg, &mesg, mesg);
	printf("copy = %s; &copy = %p; valuse = %p\n", copy, &copy, copy);

	system("pause");
	return 0;
}