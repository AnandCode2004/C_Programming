#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n",iNo);

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n" , iCnt);
        }
    }
} // Time complexity : 0(N/2)

int main()
{
     int iValue = 0;

     printf("Enter a number : \n");
     scanf("%d",&iValue);

     DisplayFactors(iValue);

    return EXIT_SUCCESS;
}