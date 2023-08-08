#include<stdio.h>
int main()
{
	int i,j,k,r1,r2,c1,c2;
	
	printf("Enter the number of rows for 1st matrix : ");
	scanf("%d",&r1);
	printf("Enter the number of columns for 1st matrix : ");
	scanf("%d",&c1);
	
	printf("\nEnter the number of rows for 2nd matrix : ");
	scanf("%d",&r2);
	printf("Enter the number of columns for 2nd matrix : ");
	scanf("%d",&c2);
	
	if (c1!=r2)
	{
		printf("\nColumns of 1st matrix is not equal to the rows of 2nd matrix");
		return 1;
	}
	
	int a[r1][c1],b[r2][c2],c[r1][c2];
	printf("\nEnter the elements of 1st matrix : \n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			printf("Enter element [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements of 2nd matrix : \n");
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
		{
			printf("Enter element [%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nMatrix 1 : \n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix 2 : \n");
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c2;j++)
		{
			c[i][j]=0;
			for (k=0;k<c1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	printf("\nMultiplied Matrix : \n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c2;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
