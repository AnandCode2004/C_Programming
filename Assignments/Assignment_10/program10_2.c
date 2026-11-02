

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
///
///     Function Name    : RectArea
///     Input            : Two Float Values
///     Output           : Double (Returns rectangle area)
///     Description      : Accept width and height and calculate rectangle area
///     Date             : 02/11/2026
///     Author           : Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is: %.3lf\n", dRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                         Testing
///
///    ------------------------------------
///     Input                      Output
///    ------------------------------------
///     5.3  9.78                  51.834
///
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////