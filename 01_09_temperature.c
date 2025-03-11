#include <stdio.h>
#include <conio.h>

int main()
{
    int celsius;
    float fahrenheit;
    // Temperature in fahrenheit=(celsius * 9/5) + 32

    printf("What is the temperature in celsius?\n");
    scanf("%d", &celsius);

    printf("temperature in fahrenheit is %f.\n", fahrenheit = (celsius * 9 / 5) + 32);

    return 0;
}