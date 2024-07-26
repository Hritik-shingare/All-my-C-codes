// Ques : Take integer input and print the
// absolute value of that integer

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter num\n");
    scanf("%d", &n);
    if (n < 0)
    {
        n = n * (-1);
        // printf("absolute value of that integer is %d",n);
    }
    printf("absolute value of that integer is %d", n);
    // else
    // {
    //     printf("absolute value of that integer is %d",n);
    // }
    return 0;
}