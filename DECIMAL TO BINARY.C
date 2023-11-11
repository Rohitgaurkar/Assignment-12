#include<stdio.h>
void binary(int);
int main()
{
    int x=41;
    binary(x);

}
void binary(int x)
{
    if(x==0)
        return;
    binary(x>>1);
    printf("%d",x&1);
}


