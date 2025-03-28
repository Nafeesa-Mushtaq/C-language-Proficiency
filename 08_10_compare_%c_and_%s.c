#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str_1[13];
    char str_2[13];
    char c;
    int i = 0;

    printf("Enter the value of first string.\n");
    scanf("%s" , str_1);

    printf("Enter the value of second string character by character.\n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c" , &c);
        str_2[i] = c;
        i++;
    }
    str_2[i-1] = '\0';

    printf("The value of first string is : %s\n" , str_1);
    printf("The value of second string is : %s\n" , str_2);

    printf("strcmp for these two strings return %d.\n" , strcmp(str_1 , str_2));   

    return 0;
}