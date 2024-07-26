
// Ques : Take 3 numbers input and tell if they
// can be the sides of a triangle.

#include <stdio.h>

int main()
{
    int a, b, c;

    // Input three side lengths
    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check the triangle inequality
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("These side lengths can form a triangle.\n");
    }
    else
    {
        printf("These side lengths cannot form a triangle.\n");
    }

    return 0;
}
