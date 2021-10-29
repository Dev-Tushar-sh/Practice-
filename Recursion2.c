#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
    int i,n;
     printf("Enter a number");
     scanf("%d",&n);
     i= sum(n);
     printf("%d",i);
}
int sum(int i)
{
    int m=0;
    m=i;
    if(m==1)
        return(m);
    m=m+sum(m-1);
    return(m);
}
