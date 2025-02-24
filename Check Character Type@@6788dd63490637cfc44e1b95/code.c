#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    scanf("%c",&a);
    if (tolower(a) == 'a' || tolower(a) == 'e' || tolower(a) == 'i' || tolower(a) == 'o' || tolower(a) == 'u')
    {
        printf("Vowel");
    }
    else if (isalpha(a))
    {
        printf("Consonant");
    }
    else if (isdigit(a))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}