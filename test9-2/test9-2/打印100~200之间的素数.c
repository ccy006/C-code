#include <stdio.h>

int main()
{
	int primeinteger;
	int i ;
	for (primeinteger = 100; primeinteger < 200;primeinteger++ )
	{
		for (i = 2; i<primeinteger; i++)
		{
			if (primeinteger % i == 0)
			{
				primeinteger++;
			}
		}
		printf("100��200��������%d\n", primeinteger);
	}
	return 0;
}
