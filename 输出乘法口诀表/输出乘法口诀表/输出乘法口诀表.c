#include <stdio.h>

int main()
{
	int i;
	int k;
	int num;
	for (i = 1; i <= 9; i++)
	{
		for (k = 1; k <= 9; k++)
		{
			num = i*k;
			printf("%d*%d=%d\t", i, k, num);
		}
		printf("\n");
	}
	return 0;
}