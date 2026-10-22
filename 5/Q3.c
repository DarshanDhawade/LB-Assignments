#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{   
    if((fMarks>100) && (fMarks<0))
    {
        return;
    }
    if(fMarks>=90)
    {
        printf("A GRADE\n");
    }
    else if(fMarks>=75)
    {
        printf("B GRADE\n");
    }
    else if(fMarks>=60)
    {
        printf("C GRADE\n");
    }
    else if(fMarks>=40)
    {
        printf("D GRADE\n");
    }
    else
    {
        printf("FAIL\n");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("ENTER MARKS :\n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);
    return EXIT_SUCCESS;
}