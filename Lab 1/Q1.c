#include <stdio.h>
int main() 
{
    int emp_id,salary_per_hour=999;
    float hours_worked;
    printf("Enter Employee ID:\t");
    scanf("%d",&emp_id);
    printf("\nEnter total hours worked in this month:\t");
    scanf("%f",&hours_worked);
    printf("The total salary of the Employee(ID = %d): Rs.%.2f/= ",       emp_id, salary_per_hour * hours_worked);
    return 0;
}
