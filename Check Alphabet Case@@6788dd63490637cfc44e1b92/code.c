#include <stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(isupper(a))
    {
        printf("%c Uppercase",a);
    }
    else if(islower(a))
    {
        printf("%c Lowercase",a);
    }
    else
    {
        printf("INVALID");
    }
}