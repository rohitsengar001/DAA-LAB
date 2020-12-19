#include<stdio.h>
int count=0;

void TOH(int n,int A,int B,int C)
{  
    //?n: number of Disks ,A: source Tower ,B:auxilory Tower & C: Destination Tower
    
    if (n>0)
    {
        
        TOH(n-1,A,C,B);
        
        printf("(%d,%d)\n",A,C);
        
        TOH(n-1,B,A,C);
    }
    
}
void main()
{
    int n;
    printf("enter the number of disk:");
    scanf("%d",&n);
    TOH(n,1,2,3);
    // printf("\nSTEP %d\n",count);
}