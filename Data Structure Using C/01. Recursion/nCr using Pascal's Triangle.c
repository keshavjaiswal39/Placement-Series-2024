#include<stdio.h>

int C(int n, int r)
{
	if(r == 0 || n == r)
	{
		return 1;
	}
	else
	{
		return C(n-1,r-1) + C(n-1,r);
	}
}

int main()
{
	int n,r;
	scanf("%d %d",&n,&r);
	printf("%dC%d using recursion is %d",n,r,C(n,r));
}
