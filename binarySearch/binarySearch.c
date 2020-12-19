#include <stdio.h>
int count = 0;
int binarySearch(int a[], int l, int r, int item)
{
    int mid;
    count++;
    while (r >= l)
    {
        mid = (l + (r - 1)) / 2;
        count++;
        if (item == a[mid])
        {
            count++;
            return mid + 1;
        }

        else if (item < a[mid])
        {
            count++;
            r = mid - 1;
        }

        else
        {
            count++;
            l = mid + 1;
        }
    }
    return -1;
}
void main()
{
    int a[100], l = 0, i, n, item, loc;
    printf("enter the size of array");
    scanf("%d", &n);
    printf("\nenter the elements into the array");
    for (i = 0; i < n; i += 1)
    {
        scanf("%d", &a[i]);
    }
    printf("\nelements are :");
    for (i = 0; i < n; i += 1)
    {
        printf("%d ", a[i]);
    }
    printf("\nsearch item :");
    scanf("%d", &item);
    loc = binarySearch(a, l, n, item);
    if (loc == -1)
    {
        printf("item is not found!!!");
    }
    else
    {
        printf("\n======================\nlocation of item = %d\ncount=%d\n======================", loc,count);

    }
}    