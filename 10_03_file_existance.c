#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("10_03_hikoo.txt" , "r");

    if (ptr == NULL)
    {
        printf("This file does not exist.\n");
        fclose(ptr);
    }

    else
    {
        int num;
        fscanf(ptr , "%d" , &num);
        printf("The value of num is %d.\n" , num);
    }

    return 0;
}