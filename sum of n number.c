#include<stdio.h>
main()
{
    int ar[10],n,x=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
     for(i=1;i<=n;i++)
     {
        x=x+ar[i];
     }
     printf("%d",x);
}
