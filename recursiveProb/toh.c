#include<stdio.h>
int count=0;

void TOH(int n,int A,int B,int C)
{  
    //?n: number of Disks ,A: source Tower ,B:auxilory Tower & C: Destination Tower
    count++;
    if (n>0)
    {
        
        TOH(n-1,A,C,B);
        count++;
        printf("(%d,%d)\n",A,C);
        count++;
        TOH(n-1,B,A,C);
        count++;
    }
    
}
void main()
{
    int n;
    printf("enter the number of disk:");
    scanf("%d",&n);
    TOH(n,1,2,3);
    printf("\ncount: %d\n",count);
}