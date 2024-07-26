// Multiple Conditions
// Using && and ||

// Ques : Take positive integer input and tell if it
// is a three digit number or not.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a num=\n");
    scanf("%d", &n);

    if (n > 99 && n < 1000)
    {
        printf("Your number is %d which is three digit number", n);
    }
    else
    {
        printf("Your number is not three digit");
    }

    return 0;
}
