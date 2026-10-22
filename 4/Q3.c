#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iValue1,int iValue2)
{   
    if(iValue1 > iValue2)
    {
        printf("GRAETER NUMBER IS :%d\n",iValue1);
    }
    else if(iValue1 < iValue2)
    {
        printf("GRAETER NUMBER IS :%d\n",iValue2);
    }
    else
    {
        printf("BOTH NUMBERS ARE EQUAL \n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;


    printf("ENTER NUMBER 1 :\n");
    scanf("%d",&iValue1);

    printf("ENTER NUMBER 2 :\n");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);
    return 0;
}