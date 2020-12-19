//inplace heap Binomial creation because we doesn't required to any extra space for Heap creation
#include <stdio.h>
//!swap function
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//!insert fucntion
void insert(int a[], int n)
//?n=>index of new inserting element which is to insert into Heap
//?a[]=>array representation of Heap
//*Height of Binary Heap must be [logn]
{
    int temp, i = n;
    temp = a[n];
    while (i > 1 && temp > a[i / 2])
    {
        a[i] = a[i / 2];
        i = i / 2;
    }
    a[i] = temp;
}
//!delete function
void delete (int a[], int n)
//*high priority element should be deleted like root node
//?n : last index number of array or we can say index of that item which want to store into the Heap
//?complexity of this function 'nlogn'
{
    int x, i, j, val;
    x = a[n];
    val = a[1];
    a[1] = a[n];
    a[n] = val;
    i = 1, j = 2 * i; //?j:left child

    while (j < n - 1)
    {
        if (a[j + 1] > a[j]) //compare righ child to left child
        {
            j = j + 1;
        }
        if (a[i] < a[j]) //compare root element with max element
        {
            swap(&a[i], &a[j]);
            i = j;
            j = 2 * j;
        }
        else
        {
            break;
        }
    }
}

void main()
{
    int a[] = {0, 10, 20, 30, 25, 5, 40, 35};
    printf("Existence Element into Array :");
    for (int i = 1; i < 8; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 1; i < 8; i++)
    {
        insert(a, i);
    }
    printf("\nInserted Element into Heap are :");
    for (int i = 1; i < 8; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 7; i > 1; i--)
    {
        delete (a, i);
    }
    printf("\n After deleting element are :");
    for (int i = 1; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
}