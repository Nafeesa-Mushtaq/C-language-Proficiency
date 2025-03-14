#include<stdio.h>
#include<conio.h>

int main()
{
    int number_1;
    int number_2;
    int number_3;
    int number_4;

    printf("Enter the first number.\n");
    scanf("%d" , &number_1);

    printf("Enter the second number.\n");
    scanf("%d" , &number_2);

    printf("Enter the third number.\n");
    scanf("%d" , &number_3);

    printf("Enter the forth number.\n");
    scanf("%d" , &number_4);

    if (number_1 > number_2 && number_1 > number_3 && number_1 > number_4)
    {
        printf("%d is the greatest.\n" , number_1);
    }

    else if (number_2 > number_1 && number_2 > number_3 && number_2 > number_4)
    {
        printf("%d is the greatest.\n" , number_2);
    }

    else if (number_3 > number_1 && number_3 > number_2 && number_3 > number_4)
    {
        printf("%d is the greatest.\n" , number_3);
    }

    else if (number_4 > number_1 && number_4 > number_2 && number_4 > number_3)
    {
        printf("%d is the greatest.\n" , number_4);
    }

    else
    {
        printf("Wrong!!");
    }
    

    return 0;
}