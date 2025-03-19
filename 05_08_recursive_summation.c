#include<stdio.h>
#include<conio.h>

int summation(int n);

int main()
{
    int a;

    printf("Enter any number up to which you want summation.\n");
    scanf("%d" , &a);

    printf("Sigma of numbers from 1 to %d is %d.\n" , a , summation(a));

    return 0;
}

int summation(int n)
{
    int sum = 0;

    for (int  i = 0; i <= n; i++)
    sum += i;
    {
        return sum;
    }
    
}