#include <stdio.h>
int n; //?n:size of array
int heapSize,count;
void swap(int *a, int *b)
{
    int temp;
    count++;
    temp = *a;
    count++;
    *a = *b;
    count++;
    *b = temp;
    count++;
}
void maxHeapify(int a[], int i)
{
    int l, r, largest; //left child : l and right child : r
    count++;
    l = 2 * i;         //left child
    count++;
    r = (2 * i) + 1;     //right child
    count++;

    if (l <= heapSize && a[l] > a[i]){
        largest = l; //left child is greater then store its index into largest
        count++;
        
    }
    else{

        largest = i; //left child is not greater than largest value considered to itself
        count++;
    }
    if (r <= heapSize && a[r] > a[largest]){

        largest = r; //right child is greater then store its index into largest
        count++;
    }

    if (largest != i)
    {
        swap(&a[i], &a[largest]);
        count++;
        maxHeapify(a, largest);
    }
}
void buildMaxHeap(int a[])
{
    heapSize = n;
    count++;
    for (int i = n / 2; i >= 1; i--) //down to top
    {
        maxHeapify(a, i);
        count++;
    }
}
void heapSort(int a[])
{
    buildMaxHeap(a);
    count++;
    for (int i = n; i >= 2; i--)//down to top
    {
        swap(&a[1], &a[i]);
        count++;
        heapSize = heapSize - 1;
        maxHeapify(a, 1);   //!maxheapify start from first index & going to leaf element's index
        count++;
    }
}
void main()
{
    int a[100];
    printf("enter the size of array");
    scanf("%d", &n);
    printf("enter the elements into the array");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nentered element are :");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    heapSort(a);
    printf("\nsorted element are :");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\ncount=%d",count);
}