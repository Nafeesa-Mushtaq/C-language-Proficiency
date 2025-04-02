#include<stdio.h>
#include<conio.h>
#include<string.h>

struct my
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct my one = {6813 , 28.08 , "Lisa"};

    printf("Code is : %d\n" , one.code);
    printf("Salary is : %f\n" , one.salary);
    printf("Name is : %s\n" , one.name);

    return 0;
}