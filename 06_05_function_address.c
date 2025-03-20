#include<stdio.h>
#include<conio.h>

void address(int m);

int main()
{
    int s = 6813;

    printf("The value of variable s is %d.\n" , s);
    printf("The address of variable s is %u.\n" , &s);

    address(s);

    return 0;
}

void address(int m)
{
    printf("The addrees of variable m is %u.\n" , &m);
}