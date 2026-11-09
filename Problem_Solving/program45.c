/* 
     Add two number and return Average 
*/

#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1 , int iNo2)
{ 
    float fAns = 0.0f;

    fAns = ((float)iNo1 + (float)iNo2) / 2 ; // business logic

    return fAns;

} 
 

int main()
{ 
    int iValue1 = 0 , iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f" , &iValue1);
    
    printf("Enter second number : \n");
    scanf("%f" , &iValue2);

    fRet = Average(iValue1, iValue2);

    printf("%.2f\n" , fRet);

  return EXIT_SUCCESS;
  
}