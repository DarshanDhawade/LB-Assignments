#include<stdio.h>
#include<stdlib.h>

void VotingElibility(int iAge)
{   
    if(iAge >= 18)
    {
        printf("ELIGIBLE TO VOTE \n");
    }
    else
    {
        printf("NOT ELIGIBLE TO VOTE \n");
    }
}
int main()
{
    int iAge = 0;

    printf("ENTER AGE :\n");
    scanf("%d",&iAge);

    VotingElibility(iAge);
    return 0;
}