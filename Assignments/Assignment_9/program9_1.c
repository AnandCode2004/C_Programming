#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : Display
///     Input            : Integer
///     Output           : None (Displays pattern)
///     Description      : Accept a number and display stars and hash symbols
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      5                         * * * * * # # # # #
///      6                         * * * * * * # # # # # #
///     -5                         * * * * * # # # # #
///      2                         * * # #
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////