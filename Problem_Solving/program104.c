/* accept number form user check number is perfect or not*/
/*  the first perfect number is 6. Its proper factors are 1, 2, and 3. 
 If you add them up: 1 + 2 + 3 = 6. */
#include <stdio.h>
#include <stdlib.h>


 void  CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;



    for(iCnt = 1; iCnt <= iNo/2; iCnt++)  
    {
        if ( (iNo % iCnt ) == 0 )
        { 
            iSum += iCnt;
           
        } 
    }

   if (iSum == iNo)
   {
        printf("it is  perfect number\n");
   } 
   else
   {
        printf("it is not a perfect number\n");
   }

}

int main()
{

    int iValue = 0;
    
    
    printf("Enter number : \n");
    scanf("%d", &iValue);
   
    CheckPerfect(iValue);
   
    return EXIT_SUCCESS;
} 



// Time Complexity  : 0(N/2)