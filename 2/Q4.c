#include<stdio.h>

void Display(int iNo,int Frequency)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=Frequency;iCnt++)
    {
        printf("%d\n",iNo);
    }

}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("ENTER NUMBER :\n");
    scanf("%d",&iValue);

    printf("ENTER FREQUENCY :\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    
    return 0;
}