#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2)==0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("ENTER NUMBER :\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    
    if (bRet == TRUE)
    {
        printf("NUMBER IS EVEN\n");
    }
    else
    {
        printf("NUMBER IS ODD\n");
    }
    return 0;
}