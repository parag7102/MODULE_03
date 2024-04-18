/*8. WAP to reverse a string and check that the string is palindrome or not 
    a. Write a program of structure employee that provides the following
    information -print and display empno, empname, address and age */

#include <stdio.h>

struct Employee {
    int empno;
    char empname[100];
    char address[100];
    int age;
};

void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;

    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    getchar();  

    printf("Enter employee name: ");
    fgets(emp.empname, sizeof(emp.empname), stdin);
    emp.empname[strlen(emp.empname) - 1] = '\0';  

    printf("Enter address: ");
    fgets(emp.address, sizeof(emp.address), stdin);
    emp.address[strlen(emp.address) - 1] = '\0'; 

    printf("Enter age: ");
    scanf("%d", &emp.age);

    printEmployee(emp);

    return 0;
}
