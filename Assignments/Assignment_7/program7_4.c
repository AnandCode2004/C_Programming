#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//   Function Name           :DisplayOddNumber    
//   Input                   :Integer
//   Output                  :Integer
//   Description             :accept number from user and display OddNumber
//   Date                    :30/10/2026
//   Author                  :Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayOddNumber(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2 ) != 0)
        {
            printf("%d\t" , iCnt);
        }
        
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    if(scanf("%d" , &iValue) != 1)
    {
        printf("invalid input");
        return EXIT_FAILURE;
    } 

    DisplayOddNumber(iValue);

    return EXIT_SUCCESS;

}