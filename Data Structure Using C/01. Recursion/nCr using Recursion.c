#include<stdio.h>

int Fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return Fact(n-1)*n;	
	}
}

int C(int n, int r)
{
	int a, b, c;
	a = Fact(n);
	b = Fact(r);
	c = Fact(n-r);
	
	return a/(b*c);
}

int main()
{
	int n,r;
	scanf("%d %d",&n,&r);
	printf("%dC%d using recursion is %d",n,r,C(n,r));
}
