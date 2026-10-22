#include<stdio.h>
#include<stdlib.h>

void checkNumber(int iNo)
{
    if (iNo > 0 )
    {
        printf("%d is a positive number\n" , iNo);
    }
     else if (iNo < 0)
    {
        printf("%d is a negative number\n" , iNo);
    } 

    else
    {
      
        printf("Zero" , iNo);
    }


}


int main ()
{

    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d" , &iValue);

    checkNumber(iValue);
    
    return EXIT_SUCCESS;
}