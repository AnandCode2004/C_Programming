#include<stdio.h>
#include<stdlib.h>

int main()
{

    char sName[30]; 
    int iAge = 0;
    float fMarks = 0.0f;

   



    printf("Enter your name : \n");
    scanf("%[^'\n']s" , sName);  // Enter remains in input buffer

     fflush(stdin);  // if still problems occurrs for getting age even if everything is correct    use this // 

    printf("Enter your age : \n");
    scanf("%d" , &iAge);  

    printf("Enter your marks : \n");
    scanf("%f" , &fMarks);  

                                      
    printf("Welcome %s\n" , sName);
    printf("Your age is %d\n" , iAge);
    printf("you marks is %f\n", fMarks); 

    return EXIT_SUCCESS;
}
 
