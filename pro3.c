#include<stdio.h>

void main()
{
    // sprintf stands for “String print”. Instead of printing on console, it store output on char buffer which are specified in sprintf.
    
    char collectall[50]="";
    char studentName[20]="";
    int studentAge;
    printf(" please tell us your name and age");
    scanf("%s \n %d",&studentName,&studentAge);
    sprintf(collectall,"my name is : %s \n my age is : %d \n",studentName,studentAge);
    printf("collect all details %s",collectall);
}