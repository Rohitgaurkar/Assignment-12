#include<stdio.h>
void printfN(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printfN(x);
    return 0;
}
void printfN(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        printfN(n-1);

    }
}
