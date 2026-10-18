 /* Program to divide two numbers */

 #include<stdio.h>
 #include<stdlib.h>

 int Divide(int iNo1 , int iNo2)
 {  
        int iAns = 0;
        if (iNo2 == 0 )
        {
            return -1;
        }
        
        iAns = iNo1 / iNo2;

        return iAns;
 }

 int main ()
 {
     int iValue1 , iValue2;

     printf("Enter first number\n");
     scanf("%d" , &iValue1);

     printf("Enter second number\n");
     scanf("%d" , &iValue2);
    
     int iRet = 0;
     iRet = Divide(iValue1 , iValue2);
     printf("Division is %d\n");

    return EXIT_SUCCESS;
 }