/*showf_ft -- �����ַ�ʽ��ʾ����ֵ*/
#include <stdio.h>
int main(void)
{
	float aboat = 3200.0;
	double abet = 2.14e9;
	long double	dip = 5.32e-5;
	printf("\a%f can be written %e\n", aboat, aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%f can be written %e\n", dip, dip);

	getchar();
	return 0;
}