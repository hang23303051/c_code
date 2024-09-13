#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	scanf("%d", &i);
	int t = 0;
	int k = 0;
	for (t = 1; t < i; t++)
	{
		for (k = 1; k <= t; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (t = i; t > 0; t--)
	{
		for (k = 1; k <= t; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}