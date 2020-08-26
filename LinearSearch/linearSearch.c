#include<stdio.h>
int count=0;//global variable
int linearSearch(int a[],int range,int item)
{
  int i;
  count++;
  count++;
  for (i = 0; i < range; i += 1)
  {
        count++;
  	if (item == a[i])
  	{
         count++;
  	  return i+1;
  	  
  	}
   count++;
  }
  count++;
  return -1;
}

void main()
{
  int a[100],range,i,loc,item;
  printf("enter the item");
  scanf("%d",&item);
  printf("enter the range of array\n");
  scanf("%d",&range);
  printf("enter the elements into the array");
  
  for (i = 0; i < range; i += 1)
  {
  	scanf("%d",&a[i]);
  }
  
  printf("elements are :");
  for (i = 0; i < range; i += 1)
  {
       printf("%d ",a[i]);
  }
  loc=linearSearch(a,range,item);
  
  if (loc == -1)
    printf("\ndata not found!!!");
  else
    printf("\nitem found at the position %d",loc);
  printf("\ncount =%d",count) ;
}
