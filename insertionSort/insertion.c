#include<stdio.h>
int count =0;
void insertionSort(int a[],int range)
{
  int i,j,key;
  count++;
  count++;
  for (i = 1; i < range; i += 1)
  {
  	key=a[i];
  	count++;
  	j = i-1;
  	count++;
  	count++;
  	while (j>-1 && a[j]>key)
  	{
  	        count++;
  		a[j+1] = a[j];//shifting
  		count++;
  		j--;
  		count++;
  	}
  	a[j+1] = key; //swapping
  	count++;
  }
}

void main()
{
  int a[100],range,i;
  printf("please enter the range of array\n");
  scanf("%d",&range);
  printf("please enter the element into the array\n");
  
  for (i = 0; i < range; i += 1)
  {
  	scanf("%d",&a[i]);
  }
  
  for (i = 0; i < range; i += 1)
  {
  	printf("%d ",a[i]);
  }
  insertionSort(a,range);
  printf("\nsorted elements are :");
  for (i = 0; i < range; i += 1)
  {
  	printf("%d ",a[i]);
  } 
  printf("\ncount = %d\n",count);
}
