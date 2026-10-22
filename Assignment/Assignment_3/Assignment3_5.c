#include<stdio.h>

typedef int BOOL;

# define TRUE 1
# define FALSE 0

BOOL ChkVowel (char vValue)
{
    if  ((vValue == 'a') || (vValue == 'e') ||
        (vValue == 'i') || (vValue == 'o') ||
        (vValue == 'u') || (vValue == 'A') ||
        (vValue == 'E') || (vValue == 'I') ||
        (vValue == 'O') || (vValue == 'U')) 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}