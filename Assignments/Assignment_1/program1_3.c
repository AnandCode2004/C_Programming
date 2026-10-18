// #include<stdio.h>
// #include<stdlib.h>

// void Display(int iNo)
// {
//     int iCnt = 0;

//     for (iCnt = iNo; iCnt >= 1; iCnt--)
//     {
//         printf("%d\n", iCnt);
//     }
// }



// int main()
// {
//      int iValue;
//      printf("Enter frequence\n");
//      scanf("%d" , &iValue);

//      Display(iValue);

//     return EXIT_SUCCESS;
// }


 /* progarm to print 5 to 1 numbers on screen */

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;
     while (iCnt >= 1)
     {
        printf("%d\n" , iCnt);

        iCnt--;
     }
     
}



int main()
{
     int iValue;
     printf("Enter frequence\n");
     scanf("%d" , &iValue);

     Display(iValue);

    return EXIT_SUCCESS;
}