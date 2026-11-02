#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : SquareMeter
///     Input            : Integer
///     Output           : Double (Returns area in square meters)
///     Description      : Convert square feet into square meters
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.092903;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is: %.6lf\n", dRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      5                         0.464515
///      7                         0.650321
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////