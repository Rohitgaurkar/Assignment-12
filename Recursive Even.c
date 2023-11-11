#include<stdio.h>
void Even(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    x=x-1;
    Even(x);
    return 0;
}
void Even(int n)
{

    if(n>=0)
    {
        Even(n-1);
        printf("%d ",2*n);
    }
}

