#include<stdio.h>

int binarySearch(int a[], int l,int h,int item)
{
  int mid;
  
  
  if (l<=h)
  {
   mid = (l+h)/2;
   if (item == a[mid])
   {
  	return mid+1;
   }
   else if (item>a[mid])
   {
   	return binarySearch(a,l,mid-1,item);
   }
   else
   {
   	return binarySearch(a,mid+1,h,item);
   }
  } 
  return -1;
  
}

void main()
{
  int a[100],l=0,i,h,item,loc;
  printf("enter the size of array");
  scanf("%d",&h);
  printf("\nenter the elements into the array");
  for (i = 0; i < h; i += 1)
  {
  	scanf("%d",&a[i]);
  }
  printf("\nelements are :");
  for (i = 0; i < h; i += 1)
  {
  	printf("%d ",a[i]);
  }
  printf("\nenter the item :");
  scanf("%d",&item);
  loc=binarySearch(a,l,h,item);
  if (loc==-1)
  {
  	printf("item is not found!!!");
  }
  else
  {
  	printf("\nlocation of item is %d",loc);
  }
}
