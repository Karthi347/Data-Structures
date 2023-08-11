#include<stdio.h>
int main()
{
int n,i,j,temp;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter elements : \n");
	for (i=0;i<n;i++)
	{
		printf("Element-%d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nArray of elements : ");
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
	
	printf("\n\nAscending Order : ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n\nDescending Order : ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;	
}
