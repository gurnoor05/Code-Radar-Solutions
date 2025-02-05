#include <stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(isupper(a))
    {
        printf("Uppercase %c",a);
    }
    else if(islower(a))
    {
        printf("Lowercase %c",a);
    }
    else
    {
        printf("INVALID");
    }
}