#include <stdio.h>
int main()
{
	int year;
	printf("1000�굽2000��֮��������У�");
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			printf("%d\n",year);

		}
	}
	return 0;
}