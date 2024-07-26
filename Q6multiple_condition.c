// Ques : Take positive integer input and tell if it
// is divisible by 5 or 3.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a num=\n");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 3 == 0)
    {
        printf("Your number is %d which is Divisible by 3 or 5 ", n);
    }
    else
    {
        printf("Your number is not Divisible by 3 or 5");
    }

    return 0;
}
