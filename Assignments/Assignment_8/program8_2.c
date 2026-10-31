#include<stdio.h>
#include<stdlib.h>  /* this absolute function * abs() * comes from this stdlib.h */

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : DisplayNumber
///     Input            : Integer
///     Output           : None (Displays number in words)
///     Description      : Accept single digit number and print it into words
///     Date             : 31/10/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayNumber(int iNo)
{
   iNo = abs(iNo);   /* Handle negative input */

   if (iNo == 0)
   {
        printf("Zero\n");
   }
   else if(iNo == 1)
   {
        printf("One\n");
   }
   else if(iNo == 2)
   {
        printf("Two\n");
   }
   else if(iNo == 3)
   {
        printf("Three\n");
   }
   else if(iNo == 4)
   {
        printf("Four\n");
   }
   else if(iNo == 5)
   {
        printf("Five\n");
   }
   else if(iNo == 6)
   {
        printf("Six\n");
   }
   else if(iNo == 7)
   {
        printf("Seven\n");
   }
   else if(iNo == 8)
   {
        printf("Eight\n");
   }
   else if(iNo == 9)
   {
        printf("Nine\n");
   }
   else
   {
        printf("Invalid Number\n");
   }
}
int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    if(scanf("%d", &iValue) != 1) /*scanf chi return value equal to 1 nasel condition true if chya at ya*/
    {
        printf("inValid Input");
        return EXIT_FAILURE;
    }

    DisplayNumber(iValue);

    return EXIT_SUCCESS;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     
///                Testing 
///
///    ------------------------------------
///     Input                      Ouput
///    ------------------------------------
///     -4                          Four
///      9                          Nine 
///      4                          Four
///      6                          Six
///      11                         Invalid Number
///      12                         Invalid Number
///      A                          Invalid Input
///      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

