#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter the number of elements in 1st array : ");
	scanf("%d",&n1);
	printf("Enter the number of elements in 2nd array : ");
	scanf("%d",&n2);
	n3=n1+n2;
	
	int a[n1],b[n2],c[n3],i,k;
	printf("\nEnter elements in 1st array : \n");
	for (i=0;i<n1;i++)
	{
		printf("Enter element - %d : ",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	k=i;
	printf("\nEnter elements in 2nd array : \n");
	for (i=0;i<n2;i++)
	{
		printf("Enter element - %d : ",i);
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	
	printf("\n1st array : \n");
	for (i=0;i<n1;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n2nd array : \n");
	for (i=0;i<n2;i++)
	{
		printf("%d ",b[i]);
	}
	
	printf("\nMerged Array : \n");
	for (i=0;i<n3;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
