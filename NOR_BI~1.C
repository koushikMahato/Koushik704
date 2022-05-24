#include <stdio.h>
#include <conio.h>
int binsearch(int a[],int beg, int end,int item)
{
   int mid = (beg+end)/2;
  while((beg<=end)&&(item!=a[mid]))
  {
  if(item<a[mid])
  end = mid-1;
  else
  beg = mid+1;
  mid=(beg+end)/2;
  }

  if(beg>end)
  return -1;
  else
  return mid;
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
