#include<stdio.h>
#include<stdlib.h>

void Display(int iNo1 , int iNo2)
{
     int iCnt = 0;

     // input updater
      if (iNo2 < 0)
         {
            iNo2 = -iNo2;
         }
     

     for (iCnt = 1 ; iCnt <= iNo2; iCnt++)
     {


            printf("%d\t", iNo1);
     }  
}

int main()
{ 
    int iValue1 , iValue2;

    printf("Enter frequence\n");
    scanf("%d" , &iValue1);

    printf("Enter frequence\n");
    scanf("%d" , &iValue2);



    Display(iValue1 , iValue2);

    return EXIT_SUCCESS;
}