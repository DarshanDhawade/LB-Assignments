#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("UPPERCASE CHARACTER \n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("LOWERCASE CHARACTER \n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("DIGITS \n");
    }
    else
    {
        printf("SPECIAL CHARACTER\n");
    }

}
int main()
{
    char cValue = '\0';

    printf("ENTER A CHARACTER :\n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);
    return EXIT_SUCCESS;
}