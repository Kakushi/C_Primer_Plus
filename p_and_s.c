/*p_and_s -- ָ����ַ���*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char * mesg = "Don't be a fool!";
	char * copy;

	copy = mesg;							//�ַ�������δ������
	printf("%s\n", copy);
	printf("mesg = %s; &mesg = %p; valuse = %p\n", mesg, &mesg, mesg);
	printf("copy = %s; &copy = %p; valuse = %p\n", copy, &copy, copy);

	system("pause");
	return 0;
}