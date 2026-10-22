#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{   
    if((iValue % 2) == 0)
    {
        printf("EVEN NUMBER \n");
    }
    else
    {
        printf("ODD NUMBER \n");
    }
}
int main()
{
    int iValue = 0;

    printf("ENTER NUMBER :\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return 0;
}