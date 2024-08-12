#include<stdio.h>

int F[10];

int memoizationFibonacci(int n)
{
	if(n<=1)
	{
		F[n] = n;
		return n;
	}
	
	else
	{
		if(F[n-2] == -1)
		{
			F[n-2] = memoizationFibonacci(n-2);
		}
		
		if(F[n-1] == -1)
		{
			F[n-1] = memoizationFibonacci(n-1);
		}
		
		F[n] = F[n-2] + F[n-1];
		
		return F[n-2] + F[n-1];
	}
}

int main()
{
	int i,n;
	
	scanf("%d", &n);
	
	for(i=0;i<10;i++)
 	{
		F[i]=-1;	 
	}
	
	printf("%d \n",memoizationFibonacci(n));
	
	return 0;
	 
}
