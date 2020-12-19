#include <stdio.h>
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

int partion(int a[], int p, int r)
{
    int pivot, i, j;
    count++;
    pivot = a[r]; //last element in array
    count++;
    i = p - 1;
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
    return i+1;
}
void quickSort(int a[], int p, int r)
{
    int q;
    count++;
    if (p < r)
    {
        count++;
        q = partion(a, p, r);
        count++;
        quickSort(a, p, q - 1);
        count++;
        quickSort(a, q + 1, r);
        count++;
    }
}

void main()
{
    int a[100], p=0, r, q, n; //? p:left most element & r:right most element, n:size of array
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
    r = n-1;
    quickSort(a, p, r);

    printf("\nsorted elemenets are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d",count);
}