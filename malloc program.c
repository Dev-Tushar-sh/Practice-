#include<stdio.h>
main()
{
    int a;
    float *p,n,f;
    printf("Enter Any Number : ");
    scanf("%f",&f);
    tushar :
    printf("1 Add\n2 Result  ");
    scanf("%d",&a);
    if(a==1)
    {
        p=(float *)malloc(4);
        printf("Enter next number : ");
        scanf("%f",&*p);
        f=f+*p;
        goto tushar;
    }
    else
    {
        printf("   Total sum is   : %f",f);
    }
getch();
}
