#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5 ) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{   
    int iValue = 0 ;
    bool bRet = false;
    
    printf("ENTER NUMBER : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet==true)
    {
        printf("IT IS DIVISIBLE BY 5 \n");
    }
    else
    {
        printf("IT IS NOT DIVISIBLE BY 5 \n");
    }

    return EXIT_SUCCESS;
}

