#include <stdio.h>
#include <conio.h>
int binsearch(int a[],int lb, int ub, int item)
{
  int mid;
  if(lb>ub)
  {
    return -1;
  }
  else
  {
    mid = (lb+ub)/2;
    if(item==a[mid])
	return mid;
    else if (item<a[mid])
	return binsearch(a,lb,mid-1,item);
    else
	return binsearch(a,mid+1,ub,item);
  }
}
int main()
{
  int a[] = {10,20,30,40,50};
  int loc,n,item;
  clrscr();
  n = 5;
  printf("Enter data you want to search: ");
  scanf("%d",&item);
  loc = binsearch(a,0,n-1,item);
  if(loc==-1)
	printf("Item not found");
  else
	printf("Item is at index %d\n",loc);
  getch();
  return 0;
}
