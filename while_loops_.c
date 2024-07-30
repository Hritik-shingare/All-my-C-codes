#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    int n;

    printf("Entre your number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}
