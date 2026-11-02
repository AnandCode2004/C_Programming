#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : CircleArea
///     Input            : Float
///     Output           : Double (Returns area of circle)
///     Description      : Accept radius and calculate area of circle
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %.4lf\n", dRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///      5.3                       88.2026
///     10.4                       339.6224
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////