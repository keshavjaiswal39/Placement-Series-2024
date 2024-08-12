#include<stdio.h>
#include<stdlib.h>


struct array
{
	int *A;
	int size;
	int length;
};

void display(struct array *arr)
{
	int i;
	printf("The elements in the array are: \n");
	for(i=0;i<arr->length;i++)
	{
		printf("%d ",arr->A[i]);
	}
	printf("\nThe size of the array is %d\n",arr->size);
	printf("The length of the array is %d\n",arr->length);
}

void append(struct array *arr, int x)   // As we are going to modify the array, we use the pointer to a structure array arr
{
	int i;
	
	if(arr->length < arr->size)
	{
		arr->A[arr->length++] = x; 
		printf("The elements after appending in the array are: \n");
		
		for(i=0;i<arr->length;i++)
		{
			printf("%d ",arr->A[i]);
		}
		
		printf("\nThe size of the array is %d\n",arr->size);
		printf("The new length of the array is %d\n\n",arr->length);
	}
	else
	{
		printf("You cannot append any elements as your length of the array is full. Please enter size of array greater than the length of array:-)\n\n");
	}
	
}

int main()
{
	int i,n;
	struct array arr;
	printf("Enter size of array\n");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter total number of array you want\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length=n;
	display(&arr);
	
	append(&arr,10);
	append(&arr,12);
	append(&arr,14);
	
	
	return 0;	
}
