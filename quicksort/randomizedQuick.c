#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int count = 0;
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
int partion(int a[], int p, int r)
{
    int pivot, i, j;
    count++;
    pivot = a[r]; //pivot=last element in array
    count++;
    i = p - 1; //outed from the array
    count++;
    for (int j = p; j < r; j++)
    {
        count++;
        if (pivot >= a[j])
        {
            i++;
            count++;
            swap(&a[i], &a[j]);
            count++;
        }
    }
    swap(&a[i + 1], &a[r]);
    count++;
    return i + 1;
}
int randomizedPartition(int a[], int p, int r)
{
    int index;
    count++;
    srand(time(0));
    count++;
    index = (rand() % (r - p + 1)) + p;
    count++;
    swap(&a[r], &a[index]);
    return partion(a, p, r);
}

void randomizedQuickSort(int a[], int p, int r)
{
    int q;
    count++;
    if (p < r)
    {
        count++;
        q = randomizedPartition(a, p, r);
        count++;
        randomizedQuickSort(a, p, q - 1);
        count++;
        randomizedQuickSort(a, q + 1, r);
        count++;
    }
}

void main()
{
    int a[100], p = 0, r, q, n; //? p:left most element & r:right most element, n:size of array
    printf("enter the range of array");
    scanf("%d", &n);
    printf("enter the elements into the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nstored elemenets are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    r = n - 1;
    randomizedQuickSort(a, p, r);

    printf("\nsorted elemenets are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nCount:%d", count);
}