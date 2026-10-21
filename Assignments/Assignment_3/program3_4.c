#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char CValue)
{
    if (CValue >=  'a' && CValue <= 'z' )
    {
        printf("%c" , CValue - 32);  // 97 - 32  = 65 = 'A'
    }
    else if (CValue >= 'A' && CValue <= 'Z');
    {
        printf("%c" , CValue + 32);
    }
}

int main ()
{
    char cValue = '\0';

    printf("Enter Character\n");

    scanf("%c" , &cValue);

    DisplayConvert(cValue);
    
    return EXIT_SUCCESS;
}