#include <stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("Uppercase %c",ch);
    }
    else if(islower(ch))
    {
        printf("Lowercase %c",ch);
    }
    else
    {
        printf("Not an alphabet");
    }
}