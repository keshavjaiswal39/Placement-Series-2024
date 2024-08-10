#include<stdio.h>

void funcB(int x);

void funcA(int x)
{
	if(x>0)
	{
		printf("%d ",x);
		
		funcB(x-1);
	}
}

void funcB(int x)
{
	if(x>1)
	{
		printf("%d ",x);
		
		funcA(x/2);
	}
}

int main()
{
	int x = 20;

	funcA(x);
	
	return 0;
}
