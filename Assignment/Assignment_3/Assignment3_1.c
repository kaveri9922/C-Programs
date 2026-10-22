// Input : 7
// Output : 2 4 6 8 10 12 14

#include<stdio.h>

void printEven(int iNo)
{

    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;

    for (iCnt = 2; iCnt <= 2*iNo; iCnt = iCnt +2)
    {
        printf("%d",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}