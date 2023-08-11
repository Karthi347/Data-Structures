#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of elements in the array : ");
	scanf("%d",&n);
	
	int a[n],i,j;
	printf("\nEnter the elements in the array : \n");
	for (i=0;i<n;i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);
	}
	
	printf("Duplicate elements are : ");
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
			{
				printf("%d ",a[j]);
			}
		}
	}
	return 0;
}
