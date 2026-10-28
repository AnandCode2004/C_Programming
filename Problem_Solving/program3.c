/*

    Step 1:     Understand the problem statement
    Step 2:     Write the algorithm
    Step 3:     Decide the programming language
    Step 4:     Write the program
    Step 5:     Test the program
             
*/


//////////////////////////////////////////////////////////
//
//  Step 1:   Understand the problem statement
//            User is going to enter any 2 integers
//            And we have to perform Addition
//                   
//////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////
//   Step 2:     Write the algorithm
/*
     START
         Accept first number as NO1
         Accept second number as NO2
         Create the variable as Ans to store the result
         perform the addition and store into Ans
         Display the result from Ans.
     END
*/
//////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////
//
//    Step 3:     Decide the programming language
//                 We select C programming
//
////////////////////////////////////////////////////////// 



///////////////////////////////////////////////////////// 
//    Step 4:     Write the program
//
//////////////////////////////////////////////////////////  



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue1 = 10 , iValue2 = 11 , iResult = 0;

    iResult = iValue1 + iValue2;  /*  Businnes logic */

    printf("%d\n", iResult);

    return EXIT_SUCCESS;
}