#include<stdio.h>
int count;

void swap(int *x, int *y)
{
  int temp;
  count++;
  temp=*x;
  count++;
  *x=*y;
  count++;
  *y=temp;
  count++;
}
void selectionSort(int a[],int range)
{
  int i,j,k;
  count++;
  for (i = 0; i < range-1; i += 1)
  {
    count++;
  	for (j =k=i; j < range; j += 1)
  	{
      count++;
  		if (a[j]<a[k])
  		{
        count++;
  			k=j;
  		}
  	}
    count++;
  	swap(&a[i],&a[k]);
  }
}

void main()
{
  int a[100],range,i;
  
  scanf("%d",&range);
  for (i = 0; i < range; i += 1)
  {
  	scanf("%d",&a[i]);
  }
  selectionSort(a,range);
  for (i = 0; i < range; i += 1)
  {
  	printf("%d ",a[i]);
  }
  printf("Count = %d",count);
}
