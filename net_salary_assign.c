#include<stdio.h>
main()
{
    float salary, grade, hra, da, netsalary;
    printf("enter the salary : ");
    scanf("%f", &salary);

    printf("enter the grade : ");
    scanf("%f", &grade);

    if (grade == 1)
    {
        hra = salary * 0.3;
        da = salary * 0.25;
        netsalary = salary + hra + da;
    }
    else
    {
        hra = salary * 0.4;
        da = salary * 0.3;
        netsalary = salary + hra + da;
    }

    printf("the amount is salary = %f\n", salary);
    printf("the HRA              = %f\n", hra);
    printf("the DA               = %f\n", da);
    printf("                      -----\n");
    printf("the net salary       = %f\n", netsalary);
}
