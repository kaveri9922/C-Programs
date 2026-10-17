/*
       step 1: understand the problem statement    
       step 2: write the algorithm
       step 3: decide the programming language
       step 4: write the program
       step 5: test the program

*/

///////////////////////////////////////////////////////
//
//  step 1: understand the problem statement 
//          User is going to enter any 2 integers
//          And we have to perform addition
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Step 2: Write the algorithm
/*
     START
        Accept 1st no. as NO1
        Accept 2nd no. as NO2
        Create the variable as Ans to store the result
        Perform the addition and store int Ans
        Display the result from Ans
     STOP

*/
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//    step 3: decide the programming language
//             We select C programming
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//    Step 4 : Write the program
//
///////////////////////////////////////////////////////

#include<stdio.h>


int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;      //Business logic

    return iAns;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0, iResult = 0 ;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1 , iValue2);

    printf("Addition is : %d\n",iResult);

    return 0;
}

