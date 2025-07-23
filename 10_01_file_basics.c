#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *ptr;

    ptr = fopen("10_01_sample.txt" , "r");    // For reading a file 
    ptr = fopen("10_01_sample.txt" , "w");    // For reading a file

    return 0;
}