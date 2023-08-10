#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	int a[n],i;
	printf("Enter elements : \n");
	for (i=0;i<n;i++)
	{
		printf("Element-%d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	while (1) 
	{
        printf("\n\nArray Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) 
		{
            case 1:
            	int pos,ele;
				printf("\nEnter the position where you want the element to be inserted : ");
				scanf("%d",&pos);
				if (pos>n || pos<=0)
				{
					printf("Invalid position");
					break;
				}
				printf("\nEnter element to be inserted : ");
				scanf("%d",&ele);
				for (i=n-1;i>=pos-1;i--)
				{
					a[i+1]=a[i];
				}
				a[pos-1]=ele;
				n++;
				printf("\nArray after insertion : \n");
				for (i=0;i<n;i++)
				{
					printf("%d ",a[i]);
				}
				break;
				
			case 2:
				printf("\nEnter the position to be deleted : ");
				scanf("%d",&pos);
				int item;
				item = a[pos-1];
				if (pos>n || pos<=0)
				{
					printf("Invalid position");
					break;
				}
				for (i=pos;i<n;i++)
				{
					a[i-1]=a[i];	
				}
				n--;
				printf("\nArray after deletion : \n");
				for (i=0;i<n;i++)
				{
					printf("%d ",a[i]);
				}
				printf("\nDeleted element : %d",item);
				break;
			case 3:
				printf("\nArray of elements : \n");
				for (i=0;i<n;i++)
				{
					printf("%d ",a[i]);
				}
				break;
			case 4:
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
		}
	}
	return 0;
}
