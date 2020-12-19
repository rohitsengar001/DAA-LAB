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
    *b =temp;
    count++;
}
void bubbleSort(int a[], int n) //?a:array , n : size of array
{
    for (int i = 1; i < n; i++)
    {
        count++;
        for (int j = 0; j <= n - i; j++)
        {
            count++;
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                count++;
            }
        }
    }
}
void main()
{
    int a[100], n; //? size of array :n
    printf("enter the range of array");
    scanf("%d", &n);
    printf("enter the element into the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("entered elements are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    bubbleSort(a, n); //calling bubble sort
    printf("\n Sorted Elements are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\ncount%d",count);
}