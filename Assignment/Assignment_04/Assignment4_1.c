#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Number is positive");
    }
    else if(iValue < 0)
    {
         printf("Number is Negative");
    }
    else
    {
        printf("Number is zero");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}