/// input : 5
// output : $ * $ * $ * $ * $ * 



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iNo = 0;
    printf("Enter number:\n");
    scanf("%d" , &iNo);

    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
         
            printf("$\t");
            printf("*\t");
    }
}