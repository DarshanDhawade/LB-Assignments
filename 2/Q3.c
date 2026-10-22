#include<stdio.h>

void Display(int iNo)
{
    if(iNo>=10)
    {
        printf("HELLO\n");
    }
    else
    {
        printf("DEMO\n");
    }
}
int main()
{
    int iValue = 0;
    printf("ENTER NUMBER \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0;
}
