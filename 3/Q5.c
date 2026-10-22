#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef char BOOL;

BOOL ChkVowel(char CValue)
{
    if( (CValue == 'a') ||
        (CValue == 'e') ||
        (CValue == 'i') ||
        (CValue == 'o') ||
        (CValue == 'u') ||
        (CValue == 'A') ||
        (CValue == 'E') ||
        (CValue == 'I') ||
        (CValue == 'O') ||
        (CValue == 'U'))
        {
            return 1;
        }
    else
        {
            return 0;
        }
}
int main()
{
    char CValue = '\0';
    BOOL bRet = FALSE;

    printf("ENTER CHARACTER :\n");
    scanf("%c",&CValue);

    bRet = ChkVowel(CValue);
    
    if (bRet == TRUE)
    {
        printf("VOWEL\n");
    }
    else
    {
        printf("CONSONANT\n");
    }
    return 0;
}