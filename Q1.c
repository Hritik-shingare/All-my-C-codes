// Ques : Take positive integer input and tell if it
//    is divisible by 5 or not.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter num\n");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        printf("is divisible by 5");
    }
    else
    {
        printf("is not divisible by 5");
    }
    return 0;
}