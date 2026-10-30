// input = 4
// ouput = 4  8  12  16   20
#include<stdio.h>
#include<stdlib.h>

void DisplayMultiples(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {

     printf("%d\t", iCnt * iNo);
        
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");

    if(scanf("%d" , &iValue) != 1)
    {
        printf("invalid input");
        return EXIT_FAILURE;
    } 

    DisplayMultiples(iValue);

    return EXIT_SUCCESS;

}