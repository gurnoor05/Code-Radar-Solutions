#include <stdio.h>
void main()
{
    char ch;
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("Uppercase");
    }
    else if(islower(ch))
    {
        printf("Lowercase");
    }
    else
    {
        printf("INVALID");
    }
}