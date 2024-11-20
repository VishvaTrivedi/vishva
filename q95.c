#include <stdio.h>
struct member
{
    char employee_name[50];
    int employee_number;
    float basic_salary;
} employeedata[5];
void main()
{
    struct member *ptr = employeedata;
    printf("Enter following details\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Employee Name:\n");
        // getchar();
        // fgets(ptr->employee_name, 50, stdin);
        scanf("%[^\n]",ptr->employee_name);
        printf("Employee Number:\n");
        scanf("%d", &ptr->employee_number);
        printf("Employee's salary:\n");
        scanf("%f", &ptr->basic_salary);
        ptr++;
    }
    ptr = employeedata;
    printf("S.no. \t Name \t\t Number \t Salary \t \n ");
    for (int i = 0; i < 2; i++)
    {
        printf("%d \t %s  %d \t %.2f\n", i + 1, ptr->employee_name, ptr->employee_number, ptr->basic_salary);
        ptr++;
    }
}