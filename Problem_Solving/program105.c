/* accept number form user check number is perfect or not*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


 bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;



    for(iCnt = 1; iCnt <= iNo/2; iCnt++)  /* <= */
    {
        if ( (iNo % iCnt ) == 0 )
        { 
            iSum += iCnt;
           
        } 
    }

   if (iSum == iNo)
   {
        return true;
   } 
   else
   {
        return false;
   }

}

int main()
{

    int iValue = 0; 
    bool bRet = false;
    
    
    printf("Enter number : \n");
    scanf("%d", &iValue);
   
   bRet =  CheckPerfect(iValue);
   if (bRet == true)
   {
    printf("it is a perfect number\n");
   } 
   else
   {
    printf("it is not a perfect number\n");
   }
   
    return EXIT_SUCCESS;
} 

// Time Complexity  : 0(N/2)