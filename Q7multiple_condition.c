// Ques : Take 3 positive integers input and print
// the greatest of them.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("enter a num a b c=\n");
    scanf("%d ", &a);
    scanf("%d ", &b);
    scanf("%d ", &c);

    if (a > b && a > c)
    {
        printf("Among these 3\n %d is greatest",a);
    }
    else if (b > a && b > c)
    {
        printf("Among these 3\n %d is greatest",b);
    }
    else
    {
        printf("Among these 3\n %d is greatest",c);
    }

    return 0;
}
