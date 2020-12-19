#include <stdio.h>
int kanpSack(int knapsackCapacity, int weight[], int value, int n)
{
    if (n == 0 || knapsackCapacity == 0)
        return 0;
    // if ()
    // {
    //     /* code */
    // }
    // else
    // {

    // }
}
void main()
{
    int value[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int knapsackCapacity = 50;
    int n = sizeof(value) / sizeof(value[0]);
    printf("%d", knapSack(knapsackCapacity, weight, value, n));
}