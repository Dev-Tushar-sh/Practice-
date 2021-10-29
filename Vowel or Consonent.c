#include<stdio.h>
main()
{
    char a;
    printf("Enter any character : ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
       printf("vowel");
    else
       printf("consonent");
    getch();
}
