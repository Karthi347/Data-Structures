#include<stdio.h>
int main()
{
	int n,i,x,index=0;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter elements : \n");
	for (i=0;i<n;i++)
	{
		printf("Element-%d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Array of elements : \n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nEnter the number to be searched : ");
	scanf("%d",&x);
	for (i=0;i<n;i++)
	{
		if (a[i]==x)
		{
			index = i;
			break;
		}
	}
	if (index!=0)
	{
		printf("The number %d is found at %d position",x,i);
	}
	else
	{
		printf("The number %d is not found",x);
	}
	return 0;
}
