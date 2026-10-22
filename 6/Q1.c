#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0 )
    {
        return;
    }
    if(iUnits <=100)
        {
            printf("COST IS :%d\n",iUnits * 5);
        }
    else if((iUnits >100) && (iUnits <= 200))
        {
            printf("COST IS :%d\n",iUnits * 7);
        }
    else
        {
            printf("COST IS :%d\n",iUnits * 10);
        }

}
int main()
{
    int iUnits = 0;
    printf("ENTER CONSUMED UNITS :\n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);
    return EXIT_SUCCESS;
}