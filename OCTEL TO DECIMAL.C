#include<stdio.h>
void binary(int);
int main()
{
    int x=12;
    binary(x);

}
void binary(int x)
{
    if(x==0)
        return;
    binary(x/8);
    printf("%d",x%8);
}
