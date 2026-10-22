#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid Age\n");
    } 
    else if (iAge < 18)
    {
        printf("Not Eligible for voting\n");
    } 
    else
    {
        printf("Eligible for voting\n");
    }


}
int main ()
{
   int iAge =  0;

   printf("Enter your age: \n");
   if (scanf("%d", &iAge) != 1)
   {
       printf("Invalid input\n");
       return EXIT_FAILURE;
   }
    
    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}