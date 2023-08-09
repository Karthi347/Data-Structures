#include<stdio.h>
int main()
{
	int n,i,j,temp,x,low,high,mid;
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
	
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\nSorted Array : \n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nEnter the number to be searched : ");
	scanf("%d",&x);
	
	low = 0;
	high = n-1;
	mid = (low+high)/2;
	while (low<=high)
	{
		mid = (low+high)/2;
		if (a[mid] < x)
		{
			low = mid+1;
		}
		else if (a[mid]==x)
		{
			printf("%d is found at %d position\n",x,mid);
			break;
		}
		else
		{
			high = mid-1;
			mid = (low+high)/2;
		}
	}
	if (low>high)
	{
		printf("%d is not found",x);
	}
	return 0;
}
