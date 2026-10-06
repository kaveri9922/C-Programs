#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, Result = 0;
    
    printf("Enter the first number:");
    scanf("%d",&iValue1);

    printf("Enter the second number:");
    scanf("%d",&iValue2);

    Result = iValue1 - iValue2;

    printf("Result is %d\n",Result);

    return 0;
}