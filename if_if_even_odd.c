#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter num\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("even num");
    }
    if (n % 2 != 0)
    {
        printf("odd num");
    }

    return 0;
}
