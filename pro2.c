#include<stdio.h>

void main()
{
    char name[20]="",Skillset[20]="";
    int exp;double Salary;
    // scanf("%s%s%d%lf",name,Skillset,&exp,&Salary);
    // printf("\n Student Name is: %s \n Student Skillset is : %s \n Student Experience :%d \nstudent InternSalary : %lf  ",name,Skillset,exp,Salary);
    
    // gets(Skillset);
    // puts(Skillset);

    fgets(Skillset,sizeof(Skillset),stdin);//file get string -fgets
    puts(Skillset);


}