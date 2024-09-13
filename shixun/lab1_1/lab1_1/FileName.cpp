#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	long double pi0 = 1;
	while(i>0)
	{
		if (i % 2 == 0)
		{
			pi0 = pi0 + 1.0 / (2 * i + 1);
			i++;
		}
		else
		{
			pi0 = pi0 - 1.0 / (2 * i + 1);
			i++;
		}
		if((1.0 / (2 * i + 1))< 1e-8)
		{
			break;
		}
	}
	double pi = 4 * pi0;
	printf("pi=%lf\n", pi);
}