// HW : Print the table of ‘n’. Here ‘n’ is a integer
// which user will input.

#include <stdio.h>

int main()
{
    int n;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Print the multiplication table for the number
    printf("Multiplication table for %d:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
