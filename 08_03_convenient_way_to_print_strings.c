#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    
    // Upper method can also be done. But in this way , we can not re-initilize (change content of) string (as shown in the below comments).

    char *ptr = "Nafeesa";

    ptr = "abc";     //If we use pointers , we can re-initilize string.

    printf("%s" , ptr);

    return 0;
}