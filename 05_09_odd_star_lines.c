#include<stdio.h>
#include<conio.h>

void pattern(int n);

int main()
{
    int lines;

    printf("How many lines you want?\n");
    scanf("%d" , &lines);

    pattern(lines);

    return 0;
}

void pattern(int n)
{
    if (n==1)
    {
        printf("*\n");
        return;
    }

    pattern(n-1);
    for (int i = 0; i <= (2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
    
}