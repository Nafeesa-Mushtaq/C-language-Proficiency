#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char first[15] = "Hi ";
    char *second = "Nafeesa";

    int value = strcmp (first , second);

    printf("Now the value is : %d\n" , value);

    return 0;
}