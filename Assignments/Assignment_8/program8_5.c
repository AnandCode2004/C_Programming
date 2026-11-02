#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : TableRev
///     Input            : Integer
///     Output           : None (Displays multiplication table in reverse)
///     Description      : Accept a number and display its table in reverse order
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = abs(iNo);
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      2                         20  18  16  14  12  10  8  6  4  2
///      5                         50  45  40  35  30  25  20  15  10  5
///     -5                         50  45  40  35  30  25  20  15  10  5
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////