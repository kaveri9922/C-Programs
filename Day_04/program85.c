/*
   -------------------------------------------
                  Operation &&
   -------------------------------------------
   Result 1       Result2        Final Result
   -------------------------------------------
   True           True             True
   True           False            False
   false          True             False        Short Circuit evaluation
   false          False            False        Short Circuit evaluation
   --------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //Logic 
    if (((iNo % 3) == 0) && ((iNo % 3) == 0))          //short circuit evaluation when input is not divisible by 3 it will not go forward
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