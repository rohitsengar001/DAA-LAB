#include <stdio.h>
#include <stdlib.h>
int count=0;
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

int partion(int a[], int l, int h)
{
    int pivot = a[l];
    count++;
    int i = l, j = h;
    count++;
    do
    {
        do
        {
            i++;
            count++;
        } while (a[i] <= pivot);
        do
        {
            j--;
            count++;
        } while (a[j] > pivot);

        if (i < j)
        {
            swap(&a[i], &a[j]);
            count++;
        }

    } while (i < j);
    count++;
    swap(&a[l], &a[j]);
    count++;
    return j;
}
void quicksort(int a[], int l, int h)
{
    int j;
    count++;
    if (l < h)
    {
        j = partion(a, l, h);
        count++;
        quicksort(a, l, j);
        count++;
        quicksort(a, j + 1, h);
        count++;
    }
}

void main()
{
    int *a, n, l = 0;
    //take size from the user
    printf("enter the range of array");
    scanf("%d", &n);
    //ends

    //creating array by dynamic allocation
    a = (int *)malloc(sizeof(int) * n);
    //ends

    //stored the elements into the array
    printf("enter the elements into the are:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //ends

    // print elements which are stored into the array
    printf("entered elements are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    // ends

    //apply quicksort
    quicksort(a, l, n); // a= array, lowest index =l, highest index [h]=n-1
    //ends

    //print sorted elements
    printf("\nsorted elements are  :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\ncount = %d",count);
    //ends
}