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

 /* take Values form user , this code is better than previous one*/

#include<stdio.h>
#include<stdlib.h> 

////////////////////////////////////////////////////////////
//  
//   Function Name           :Addition    
//   Input                   :Integer,Integer
//   Output                  :Integer
//   Description             :Performs addition
//   Date                    :30/10/2026
//   Author                  :Anand Rashtrapal Ingle
//
//////////////////////////////////////////////////////// 

int Addtion(int iNo1 , int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;  /* businnes logic*/
    return iAns;
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;

    printf("Enter first number: \n");
    scanf("%d" , &iValue1);

    printf("Enter Second number: \n");
    scanf("%d" , &iValue2);

    iResult = Addtion(iValue1,iValue2);  /*  Businnes logic */

    printf("Addition is : %d\n", iResult);

    return EXIT_SUCCESS;
}