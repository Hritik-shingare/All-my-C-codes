// Ques : Given the length and breadth of a rectangle,
// write a program to find whether the area of the
// rectangle is greater than its perimeter.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int l, b;

    printf("enter length and breadth of a rectangle\n ");
    scanf("%d ", &l);
    scanf("%d", &b);

    int a = l * b;
    int p = 2 * (l + b);

    if (a > p)
    {
        printf("area=%d is greater then perimeter=%d", a, p);
    }
    else if (p > a)
    {
        printf("area=%d is lesser then perimeter=%d", a, p);
    }
    else
    {
        printf("area=%d is equle to then perimeter=%d", a, p);
    }

    return 0;
}
