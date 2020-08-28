#include<stdio.h>
int count;

void swap(int *x, int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
void selectionSort(int a[],int range)
{
  int i,j,k;
  
  for (i = 0; i < range-1; i += 1)
  {
  	for (j =k=i; j < range; j += 1)
  	{
  		if (a[j]<a[k])
  		{
  			k=j;
  		}
  	}
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
}
