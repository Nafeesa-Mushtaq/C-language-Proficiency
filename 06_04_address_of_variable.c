#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 8;

    int *ptr;
    ptr = &a;

    printf("The address of variable a is %u.\n" , &a);
    printf("The address of variable a is %u.\n" , ptr);

    printf("The value of variable a is %d.\n" , a);
    printf("The value of variable a is %d.\n" , *ptr);

    return 0;
}