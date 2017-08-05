/*wheat.c -- 指数增长*/
#include <stdio.h>
#define SQUARES 64
#define CROP 1E15
int main(void)
{
	double current, total;
	int count = 1;

	printf(" square    grains	total");
	printf("	   fraction of \n");
	printf("	    added	grain");
	printf("	   US total\n");
	total = current = 1.0;					/*开始时1粒*/
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	while (count<SQUARES)
	{
		count = count + 1;
		current = 2.0*current;				/*下个方格的粒数加倍*/
		total = total + current;			/*更新总数*/
		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	}
	printf("That's all.\n");

	getchar();
	return 0;
}