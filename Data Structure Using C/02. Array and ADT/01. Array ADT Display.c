#include<stdio.h>
#include<stdlib.h>  // malloc is in stdlib

struct Array
{
	int *A;
	int size;
	int length;	
};

void Display(struct Array arr)
{
	int i;
	printf("Elements are\n");
	
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

int main()
{
	struct Array arr;
	int n,i;
	printf("Enter size of an array\n");
	scanf("%d", &arr.size);
	arr.A = (int *)malloc(arr.size * sizeof(int));
	arr.length = 0;    // as there is no any elements
	
	printf("Enter number of elements\n");
	scanf("%d", &n);
	
	printf("Enter all the elements\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	
	arr.length = n;
	
	Display(arr);
	
	
	
	
	return 0;
}

