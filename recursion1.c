#include<stdio.h>
int sum(int);
int main()
{
    int i,a,b;
    scanf("%d",&a);

    i=sum(a);
    printf("%d",i);
    return 0;

}
int sum(int n)
{
    int i=0;
    if(n==1)
        return n;
    else
    i=n+sum(n-1);
}
