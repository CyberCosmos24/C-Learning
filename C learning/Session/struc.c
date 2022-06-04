#include <string.h>
#include <stdio.h>
#include <conio.h> 


struct person 
{
    char name[50];
    int citno;
    float salary;

}

person1;
int main()
{
    strcpy(person1.name, "John");
    person1.citno = 24;
    person1.salary = 100;

    printf("Name: %s\n", person1.name);
    printf("Salary: %.2f\n", person1.salary);
    printf("City Number: %d\n", person1.citno);
    return 0;
}