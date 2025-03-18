#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;n-i)
        {
            printf(" ");
        }
        for(int j=0;j<=n;2*n-i)
        {
            printf("%d");
        }
        printf("\n");
    }
}