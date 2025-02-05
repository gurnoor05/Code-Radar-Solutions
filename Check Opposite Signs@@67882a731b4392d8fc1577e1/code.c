#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(-a&&b || a&&-b)
    {
        printf("True");
    }
    else if(-a&&-b)
    {
        printf("False");
    }
    else if(-a&&b==0 || a&&b==0)
    {
        printf("False");
    }
    else if(-b&&a==0 || b&&a==0)
    {
        printf("False");
    }
    else
    {
        printf("INVALID");
    }
}