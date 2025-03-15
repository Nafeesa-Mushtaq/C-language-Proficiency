#include<stdio.h>
#include<conio.h>

int main()
{
    int n;

    printf("Enter the value of n.\n");
    scanf("%d" , &n);

    for (int i = n; i < 10; i++)
    {
        printf("The value of i is %d.\n" , i);
    }
    

    return 0;
}