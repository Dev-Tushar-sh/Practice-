#include<stdio.h>
#include<conio.h>
void main()
{
    printf("My name is Tushar Sharma");
    int a = sum(15);
    printf("Your sum is : %d",a);
}
int sum(int s)
{

    int n;
    n=s;
    if(n==1)
        return(1);
    n = n + sum(n-1);
    return(n);

}

