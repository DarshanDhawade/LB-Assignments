#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{   
    if(((iYear % 4) == 0) || ((iYear % 400) == 0) || ((iYear % 100) != 0))
    {
        printf("LEAP YEAR\n");
    }
    else
    {
        printf("NO LEAP YEAR\n");
    }
}
int main()
{
    int iYear = 0;

    printf("ENTER NUMBER :\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);
    return 0;
}