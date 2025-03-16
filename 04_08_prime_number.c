#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    int prime = 1;

    printf("Enter any number to check that is it a prime number or not : ");
    scanf("%d" , &number);

    for (int i = 2; i < number; i++)
    {
        if (number%i == 0)
        {
            prime = 0;
            break;
        }
        
    }

    if (prime == 0 || number == 1)
    {
        printf("%d is not a prime number.\n" , number);
    }

    else
    {
        printf("%d is a prime number.\n" , number);
    }
           
    return 0;
}