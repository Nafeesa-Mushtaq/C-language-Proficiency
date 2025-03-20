#include<stdio.h>
#include<conio.h>

int increaser(int *a);

int main()
{
    int val = 8;
    int z;

    printf("The value of variable before increasing is %d.\n" , val);

    z = increaser(&val);

    printf("The value of variable after increasing is %d.\n" , z);
    return 0;
}

int increaser(int *a)
{
    int results;
    results = 11 * (*a);
    return results;

}