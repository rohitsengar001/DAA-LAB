#include <stdio.h>
int count=0;
int binarySearch(int a[], int l, int h, int item)
{
  int mid;
  count++;  

  if (l <= h) //atlest 1 element required
  {
    mid = (l + h) / 2;
    count++;  
    if (item == a[mid])
    {
      count++;  
      return mid + 1; //location
    }
    else if (item < a[mid])
    {
      count++;  
      return binarySearch(a, l, mid - 1, item);
    }
    else
    {
      count++;  
      return binarySearch(a, mid + 1, h, item);
    }
  }
  return -1;
}

void main()
{
  int a[100], l = 0, i, h, item, loc;
  printf("enter the size of array");
  scanf("%d", &h);
  printf("\nenter the elements into the array");
  for (i = 0; i < h; i += 1)
  {
    scanf("%d", &a[i]);
  }
  printf("\nelements are :");
  for (i = 0; i < h; i += 1)
  {
    printf("%d ", a[i]);
  }
  printf("\nenter the item :");
  scanf("%d", &item);
  loc = binarySearch(a, l, h-1, item);
  if (loc == -1)
  {
    printf("item is not found!!!");
  }
  else
  {
    printf("\nlocation of item is %d", loc);
  }
  printf("\ncount:%d",count);
}
