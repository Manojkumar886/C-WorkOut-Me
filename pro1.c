#include <stdio.h>

void main()
{
    printf(" welcome to Zealous Tech Corp");

    char chocolateCost=50,type='M';
    char chocolateName[]="";
    int ManagementCode=78;
    printf("\n tell us your favoriate chocolatename :");
    scanf("%s",&chocolateName);
    printf("\n Chocolate Info \n ChocolateName : %s \n ChocolateCost : %c \n ChocolateType:%c \n",chocolateName,chocolateCost,type);

    char connect=type;
    printf("Ascii value of %c  =  %d",type,connect);
}