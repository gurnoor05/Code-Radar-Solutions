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
    else
    {
        printf("INVALID");
    }
}