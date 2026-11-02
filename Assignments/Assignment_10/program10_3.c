#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : KMtoMeter
///     Input            : Integer
///     Output           : Integer (Returns distance in meters)
///     Description      : Convert kilometer into meter
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometer: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      5                         5000
///     12                        12000
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////