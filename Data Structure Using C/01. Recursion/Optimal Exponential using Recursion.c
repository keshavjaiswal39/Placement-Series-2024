#include<stdio.h>

int power_op(int m, int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n%2==0)
	{
		return power_op(m*m,n/2);
	}
	
	return m*power_op(m*m,n/2);
}

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("Power of %d^%d is = %d",m,n,power_op(m,n));
	return 0;
}
