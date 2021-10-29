#include<stdio.h>
main()
{
    int y;
    printf("Enter The Year : ");
    scanf("%d",&y);
    if(y%4==0)
        printf("Leap year");
    else
        printf("not a leap year");
}
