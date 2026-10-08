#include<stdio.h>

int Division(int No1 , int No2)
{
    int iResult = 0;
    iResult = No1/No2; // Business logic
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0 , Ans =0;

    printf("Enter first number :");
    scanf("%d", &iValue1);

    printf("Enter second number :");
    scanf("%d", &iValue2);

    Ans =(iValue1 , iValue2);
    printf("Division is %d\n",Ans);

}