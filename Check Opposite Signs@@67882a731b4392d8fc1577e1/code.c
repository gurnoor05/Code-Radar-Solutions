#include <stdio.h>
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(-a&&b || a&&-b)
    {
        printf("True");
    }
    else if(a&&b || -a&&-b)
    {
        printf("False");
    }
    else if(-a&&0 || a&&0)
    {
        printf("False");
    }
    else if(-b&&0 || b&&0)
    {
        printf("False");
    }
    else
    {
        printf("INVALID");
    }
}