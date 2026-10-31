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

   switch(iNo)
   {
     case 0:printf("Zero\n");break;
     case 1:printf("One\n");break;
     case 2:printf("Two\n");break;
     case 3:printf("Three\n");break;
     case 4:printf("Four\n");break;
     case 5:printf("Five\n");break;
     case 6:printf("Six\n");break;
     case 7:printf("Seven\n");break;
     case 8:printf("Eight\n");break;
     case 9:printf("Nine\n");break;

     default:printf("Invalid Number\n");break;
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

///      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

