#include<stdio.h>
void main()
{
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+')
    {
        printf("%d",(a+b))
    }
    if(c=='-')
    {
        printf("%d",(a-b))
    }
    if(c=='*')
    {
        printf("%d",(a*b))
    }
    if(c=='/')
    {
        printf("%d",(a/b))
    }
}