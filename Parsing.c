#include<stdio.h>

void main()
{
    int a=77;
    printf("%d\n ",a);//you will get a out put is 45 (its called as implicit Parsing)

    float b=90;
    printf("%f \n",b);

    float c=(float)50/20;
    printf("%f\n",c);//Explicit Manual  Parsing Performance

   const int d=10;
//    d=23;Error Assigned Read Only Value
   printf("%d \n",d);
}