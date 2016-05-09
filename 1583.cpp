//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<iostream>
int a[100001];

int main()
{
	memset(a, 0, sizeof(a));
	int i = 1, n2 = 0;
	for(i;i<100001;i++)
	{
		n2 = i + i % 10 + (i % 100) / 10 + (i % 1000) / 100 + (i % 10000) / 1000 + (i % 100000) / 10000;
		if (a[n2] == 0)
			a[n2] = i;
	}
	int n,t;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &t);
		printf("%d\n", a[t]);
	}
	//system("PAUSE");
	return 0;
}