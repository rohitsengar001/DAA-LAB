#include<stdio.h>
int count=0;
void Merge(int A[],int l,int mid,int h)
{
 int i=l,j=mid+1,k=l;
 int B[100];
 count++;
 count++;
 while(i<=mid && j<=h)
 {
  if(A[i]<A[j])
  {
  count++;
  B[k++]=A[i++];
  count++;
  }
 else{
 B[k++]=A[j++];
 count++;
  }
 }
 for(;i<=mid;i++)
 {
   B[k++]=A[i];
   count++;
 }
 count++;
 for(;j<=h;j++)
 {
   B[k++]=A[j];
   count++;
 }
 count++;
 for(i=l;i<=h;i++)
 {
   A[i]=B[i];
   count++;
 }  
}

void MergeSort(int A[],int l,int h)
{
 int mid;
 count++;
 if(l<h)
 {
 count++;
 mid=(l+h)/2;
 count++;
 MergeSort(A,l,mid);
 count++;
 MergeSort(A,mid+1,h);
 count++;
 Merge(A,l,mid,h);
 count++;
 }
}
int main()
{
 int A[100],n,i;
 printf("enter the size of array :");
 scanf("%d",&n);
 
 printf("enter the elements");
 for(i=0;i<n;i++)
 {
   scanf("%d",&A[i]);
 }
 printf("elements are :\n");
 for(i=0;i<n;i++)
 {
   printf("%d ",A[i]);
 }
 printf("\n");
 MergeSort(A,0,n-1);
 printf("sorted elements are :\n");
 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");
 printf("count =%d",count);
 return 0;
}
