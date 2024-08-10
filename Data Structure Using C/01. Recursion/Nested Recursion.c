#include<stdio.h>

int Func(int n)
{
	if(n>100)
	{
		return n-10;
	}
	else
	{
		return Func(Func(n+11));
	}
}

int main()
{
	int n;
	n = Func(95);
	printf("%d ",n);
	
	return 0;
}
