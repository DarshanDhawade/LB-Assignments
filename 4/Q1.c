#include<stdio.h>
#include<stdlib.h>

void CheckNo(int iValue)
{   
    if(iValue > 0)
    {
        printf("POSITIVE NUMBER \n");
    }
    else if(iValue < 0)
    {
        printf("NEGATIVE NUMBER \n");
    }
    else
    {
        printf("ZERO\n");
    }
}
int main()
{
    int iValue = 0;

    printf("ENTER NUMBER :\n");
    scanf("%d",&iValue);

    CheckNo(iValue);
    return 0;
}