#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("10_06_reading.txt" , "r");

    char c;
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c" , c);
        c = fgetc(ptr);
    }

    return 0;
}