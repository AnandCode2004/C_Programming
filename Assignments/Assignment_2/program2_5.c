#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Display(int iNo1)
{
        if (iNo1 %  2 == 0)
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
    int iValue1;
    bool bRet = false;

    printf("Enter frequence\n");
    scanf("%d" , &iValue1);

   if (bRet == true)
   {
    printf("%d is even number \n "  , iValue1);
   }
   else
   {
    printf("%d is odd nubmer \n "  , iValue1);
   }
   



    Display(iValue1);

    return EXIT_SUCCESS;
}