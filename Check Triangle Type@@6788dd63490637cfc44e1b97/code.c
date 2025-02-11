#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a==b && a==c && b==c)
    {
        printf("Equilateral");
    }
    else if(a==b && a!=c || a==c && a!=b || b==c && a!=c)
    {
        printf("Isosceles");
    }
    else if(a!=b && a!=c && b!=c)
    {
        printf("Scalene");
    }
    else{
        printf("0");
    }
}