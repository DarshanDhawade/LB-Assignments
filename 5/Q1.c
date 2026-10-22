#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iValue1,int iValue2,int iValue3)
{   
    if((iValue1 > iValue2) && (iValue1 > iValue3))
    {
        printf("GRAETER NUMBER IS :%d\n",iValue1);
    }
    else if((iValue2 > iValue1) && (iValue2 > iValue3))
    {
        printf("GRAETER NUMBER IS :%d\n",iValue2);
    }
    else if((iValue3 > iValue1) && (iValue3 > iValue2))
    {
        printf("GRAETER NUMBER IS :%d\n",iValue3);
    }
    else
    {
        printf("ALL NUMBERS ARE EQUAL \n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;


    printf("ENTER NUMBER 1 :\n");
    scanf("%d",&iValue1);

    printf("ENTER NUMBER 2 :\n");
    scanf("%d",&iValue2);

    printf("ENTER NUMBER 3 :\n");
    scanf("%d",&iValue3);

    FindGreater(iValue1,iValue2,iValue3);
    return 0;
}