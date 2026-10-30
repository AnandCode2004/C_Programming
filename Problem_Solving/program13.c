#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//  
//   Function Name           :Addition    
//   Input                   :Integer,Integer
//   Output                  :Integer
//   Description             :Performs addition
//   Date                    :09/10/2026
//   Author                  :Anand Rashtrapal Ingle
//
//////////////////////////////////////////////////////// 

int Addition (
                    int iNo1,       // first input
                    int iNo2        // second input
             ) 

{
    int iAns = 0;

    iAns = iNo1 + iNo2;            // Business Logic 

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0; 

    printf("Enter first number : \n");
    if(scanf("%d" , &iValue1) != 1) 
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;      // invalid ahe ter baher kada
    }   

    

    printf("Enter second number: \n");
    if(scanf("%d" , &iValue2) != 1) 
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;      // invalid ahe ter baher kada
    }   

    iResult = Addition(iValue1, iValue2);           

    printf("Addition is : %d\n" , iResult);


    return EXIT_SUCCESS;     
} 



////////////////////////////////////////////////////////
//        Step 5:     Test the program
//      
//         Tested test cases
//-----------------------------------------------------------
//          Input1        Input2       ouput
//------------------------------------------------------
//          10              11          21
//          11              0           11
//          0               11          11
//          20              -9          11
//          -9              20          11
//         -20             -11         -31
//
////////////////////////////////////////////////////////