/*electric.c -- �����õ���Ŀ*/
#include <stdio.h>
#include <stdlib.h>
#define RATE1 0.12589					/*��һ��360kWh�ķ���*/
#define RATE2 0.17901					/*��һ��320kWh�ķ���*/
#define RATE3 0.20971					/*����680kWh�ķ���*/
#define BREAK1 360.0					/*���ʵ�һ���ֽ��*/
#define BREAK2 680.0					/*���ʵڶ����ֽ��*/
#define BASE1 (RATE1 * BREAK1)			/*�õ�360kWh�ķ���*/
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
										/*�õ�680kWh�ķ���*/
int main(void)
{
	double kWh;							/*�õ��ǧ��ʱ��*/
	double bill;						/*����*/

	printf("Please enter the kWh used.\n");
	scanf_s("%lf", &kWh);				/*%lf��double���͵�˵����*/
	if (kWh <= BREAK1)
	{
		bill = RATE1 * kWh;
	}
	else if (kWh <= BREAK2)				/*�õ�����360kWh~680kWh֮��ʱ*/
	{
		bill = BASE1 + (RATE2 * (kWh - BREAK1));
	}
	else								/*�õ�������680kWhʱ*/
	{
		bill = BASE2 + (RATE3 * (kWh - BREAK2));
	}
	printf("The charge for %.1f kWh is $%1.2f.\n", kWh, bill);

	system("pause");
	return 0;
}