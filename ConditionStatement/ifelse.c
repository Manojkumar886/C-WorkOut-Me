#include <stdio.h>
// #include <stdlib.h>  
// strcpy()strcpy is a C standard library function that copies a string from one location to another
void main()
{
    char Season[]="";
    printf("please tell us your favoriate Season");
    char seasontype[]=scanf("%s\n",&Season);
    if(Season=="summer")
    {
        printf(" summer is March to May ");
    }
    else
    {
        printf(" your value is not season");
    }
}