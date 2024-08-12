#include<stdio.h>

void func(int n)
{
	if(n>0)
	{
		printf("%d ", n);
		
		func(n-1);
		func(n-1);
	}
	
}

int main()
{
	int n = 3;
	func(n);
	
	return 0;	
} 
