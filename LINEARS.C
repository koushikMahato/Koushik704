/*Linear Search*/
#include <stdio.h>
#include <conio.h>
void lins(int arr[],int size,int item)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i] == item)
		{
			printf("Item is found on index %d",i);
			break;
		}
	}
}
int main()
{
	int arr[100],size,i,item;
	clrscr();
	printf("Enter array size: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %dth number element: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter data you want to search: ");
	scanf("%d",&item);
	lins(arr,size,item);
	getch();
	return 0;
}
