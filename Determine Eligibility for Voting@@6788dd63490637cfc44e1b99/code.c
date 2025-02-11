#include <stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a>=18)
    {
        printf("Eligible");
    }
    else if(a<18)
    {
        printf("Not Eligible");
    }
}