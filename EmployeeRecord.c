/*C program to read and print employee's record using structure*/
#include<stdio.h>

/*structure declaration*/
struct employee{
    char name[30];
    int empID;
    float salary;
};

int main(){
    /*declare structure variable*/
    struct employee emp;

    /*read employee details*/
    printf("\nEnter details: \n");
    printf("Name of the employee: ");          gets(emp.name);
    printf("Employee ID: ");             scanf("%d", &emp.empID);
    printf("Salary: ");        scanf("%f", &emp.salary);
    
    /*print employee details*/
    printf("\nEntered detail is: ");
    printf("\nName: %s", emp.name);
    printf("\nID: %d", emp.empID);
    printf("\nSalary: $%.1f/year\n", emp.salary);
    return 0;
}