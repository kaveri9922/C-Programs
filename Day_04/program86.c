/*
   -------------------------------------------
               Operation ||
   -------------------------------------------
   Result 1       Result2        Final Result
   -------------------------------------------
   True           True             True        Short circuit evaluation
   True           False            True        Short circuit evaluation
   false          True             True
   false          False            False
   --------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //Logic 
    if (((iNo % 3) == 0) || ((iNo % 3) == 0))         
    {
        printf("It is Divisible \n");
    }
    else
    {
        printf("It is Not divisible \n");
    }

}

int main()
{
    int iValue = 0;
;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}