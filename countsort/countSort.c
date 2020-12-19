#include <stdio.h>
#include <stdlib.h>
int count = 0;
int sizeArray=0;
int ArraySize(int * Array)
{

  return (sizeof(Array)/sizeof(int));

}
int findMax(int a[], int n)
{
    int max = a[0];
    int i;
    for (i = 1; i < n; i++)
    {
        count++;
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void countSort(int a[], int c[], int m) //here n is size of array
{
    int i, j;
    // count++;
    // max=findMax(a,n);//find max elemement value into the original array
    // count++;
    // c=(int*)malloc(sizeof(int)*(max+1));//dynamic memory from 1 to (max+1) = max element's size allocated
    count++;
    for (i = 0; i < m + 1; i++)
    {
        c[i] = 0; // intialized all element's value =0
        count++;
    }
    count++;
    for (i = 0; i < sizeArray ; i++)
    {
        c[a[i]]++; //the element in terms of their values stored into count array
        count++;
    }

    i = 0, j = 0;
    //value restored from count array to original array
    count++;
    while (j < m + 1) //check element up to max
    {
        count++;
        if (c[j] > 0)
        {
            a[i++] = j;
            count++;
            c[j]--;
            count++;
        }
        else
        {
            j++;
            count++;
        }
    }
}

int main()
{
    int a[100], i, n, *c, max;
    printf("enter the size");
    scanf("%d", &n);
    printf("enter the elements into the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sizeArray++;
    }

    printf("entered elements are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    max = findMax(a, n); //find max elemement value into the original array
    c = (int *)malloc(sizeof(int) * (max + 1)); //dynamic memory from 1 to (max+1) = max element's size allocated
    
    countSort(a,c,max); // calling counting sort
    printf("\nsorted elements are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Count = %d", count);
    return 0;
}
