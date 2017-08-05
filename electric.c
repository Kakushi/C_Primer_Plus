/*electric.c -- 计算用电账目*/
#include <stdio.h>
#include <stdlib.h>
#define RATE1 0.12589					/*第一个360kWh的费率*/
#define RATE2 0.17901					/*下一个320kWh的费率*/
#define RATE3 0.20971					/*超过680kWh的费率*/
#define BREAK1 360.0					/*费率第一个分界点*/
#define BREAK2 680.0					/*费率第二个分界点*/
#define BASE1 (RATE1 * BREAK1)			/*用电360kWh的费用*/
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
										/*用电680kWh的费用*/
int main(void)
{
	double kWh;							/*用电的千瓦时数*/
	double bill;						/*费用*/

	printf("Please enter the kWh used.\n");
	scanf_s("%lf", &kWh);				/*%lf是double类型的说明符*/
	if (kWh <= BREAK1)
	{
		bill = RATE1 * kWh;
	}
	else if (kWh <= BREAK2)				/*用电量在360kWh~680kWh之间时*/
	{
		bill = BASE1 + (RATE2 * (kWh - BREAK1));
	}
	else								/*用电量超过680kWh时*/
	{
		bill = BASE2 + (RATE3 * (kWh - BREAK2));
	}
	printf("The charge for %.1f kWh is $%1.2f.\n", kWh, bill);

	system("pause");
	return 0;
}