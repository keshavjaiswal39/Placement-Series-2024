#include<stdio.h>

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	
	else
	{
		return sum(n-1)+n;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("Sum of %d natural numbers is = %d",n,sum(n));
	
	return 0;
}

// using loop
/*
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
*/
