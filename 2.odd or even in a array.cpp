#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	int a[n],i;
	printf("\nEnter elements : \n");
	for (i=0;i<n;i++)
	{
		printf("Element-%d :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Odd or Even : \n");
	for (i=0;i<n;i++)
	{
		if (a[i]%2==0)
			printf("%d is even\n",a[i]);
		else
			printf("%d is odd\n",a[i]);
	}
	return 0;
}
