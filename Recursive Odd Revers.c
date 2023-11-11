#include<stdio.h>
void Odd(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    Odd(x);
    return 0;
}
void Odd(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        Odd(n-1);

    }
}

