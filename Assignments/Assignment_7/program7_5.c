// input = 4
// ouput = 4  8  12  16   20
#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//   Function Name           :DisplayMultiples    
//   Input                   :Integer
//   Output                  :Integer
//   Description             :write a program which accepts n number and print 5 multiplies of that number
//   Date                    :30/10/2026
//   Author                  :Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayMultiples(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {

     iMulti = iCnt * iNo;
     printf("%d\t", iMulti);
        
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

    DisplayMultiples(iValue);

    return EXIT_SUCCESS;

}