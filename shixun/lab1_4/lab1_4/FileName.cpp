#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	void countDigit(long int n, int a[]);
	int a[10] = { 0 };
	long int n;
	scanf("%ld", &n);
	countDigit(n, a);
	for (int i = 0; i < 10; i++)
	{
		if(a[i]>0)
		printf("数字%d出现的次数为%d\n",i, a[i]);
	}
}
void countDigit(long int n, int a[])
{
	while (n > 0)
	{
		a[n % 10]++;
		n = n / 10;
	}
}