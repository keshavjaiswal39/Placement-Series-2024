#include<stdio.h>

// Head Function
void HeadFunc(int n)
{
	if(n>0)
	{
		printf("%d ", n);
		HeadFunc(n-1);
	}
}

// Tail Function
void TailFunc(int n)
{
	if(n>0)
	{
		TailFunc(n-1);
		printf("%d ", n);
	}
}

int main()
{
	int x = 10;
	
	HeadFunc(10);
	printf("\n");
	func1(10);
	
	return 0;
}
