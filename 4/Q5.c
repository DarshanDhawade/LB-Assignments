#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{   
    if((iValue % 5) == 0)
    {
        printf("DIVISIBLE BY 5 \n");
    }
    else
    {
        printf("NOT DIVISIBLE BY 5\n");
    }
}
int main()
{
    int iValue = 0;

    printf("ENTER NUMBER :\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);
    return 0;
}