#include<stdio.h>
int location=0,count=0;
int linearRecur(int a[],int range,int item)
{
  count++;
  if(location>range)
   {
    count++;
    return -1;
   } 
   count++;
  if(item == a[location])
  {
    count++;
    return location+1;
  }  
  else
  {
    count++;	
    location++;
    count++;
    linearRecur(a,range,item);
  }  
}

void main()
{
  int a[100],range,item,i,loc;
   printf("enter the range of the array");
   scanf("%d",&range);
   printf("enter the into the array");

   for (i = 0; i < range; i += 1)
   {
   	scanf("%d",&a[i]);
   }
   printf("enter the item that you want to search");
   scanf("%d",&item);
   loc=linearRecur(a,range,item);
   if (loc == -1)
   {
   	printf("\n item is not found!!!");
   }
   else 
     printf("\nitem found at the location =  %d",loc);
   printf("\ntime complexcity = %d\n",count);
   
}
