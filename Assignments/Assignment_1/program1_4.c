/* Accepts one number check it is divisible by 5 or not */


// #include<stdio.h>
// #include<stdlib.h>


// void Divisible(int iNo)
// {
//     if (iNo % 5 == 0)
//     {
//         printf("it is divisible\n");
//     }
//     else 
//     {
//         printf("it is not divisible\n");
//     }
// }
// int main()
// {

//     int iValue = 0;
//     printf("Enter number\n");
//     scanf("%d" , &iValue);

//     Divisible(iValue);

//     return EXIT_SUCCESS;
// }





#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Divisible(int iNo)
{
    if (iNo % 5 == 0)
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

    printf("Enter number\n");
    scanf("%d" , &iValue);


    bRet = Divisible(iValue);

    if (bRet == true)
    {
        printf("it is divisible\n");
    } 
    else
    {
        printf("it is not divisible");
    }

    return EXIT_SUCCESS;
}