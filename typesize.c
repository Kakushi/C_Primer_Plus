/*typesize.c -- ������͵Ĵ�С*/
#include <stdio.h>
int main(void)
{
	/*C99Ϊ���ʹ�С�ṩһ��%zd˵����*/
	printf("Type int has a size of %u bytes.\n", sizeof(int));
	printf("Type char has a size of %u bytes.\n", sizeof(char));
	printf("Type short has a size of %u bytes.\n", sizeof(short));
	printf("Type long has a size of %u bytes.\n", sizeof(long));
	printf("Type long long has a size of %u bytes.\n", sizeof(long long));
	printf("Type float has a size of %u bytes.\n", sizeof(float));
	printf("Type double has a size of %u bytes.\n", sizeof(double));

	getchar();
	return 0;
}