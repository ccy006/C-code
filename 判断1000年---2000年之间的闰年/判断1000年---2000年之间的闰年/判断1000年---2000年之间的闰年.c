#include <stdio.h>
int main()
{
	int year;
	printf("1000年到2000年之间的闰年有：");
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			printf("%d\n",year);

		}
	}
	return 0;
}