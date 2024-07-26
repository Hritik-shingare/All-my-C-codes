#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    a = 5;
    b = 5;
    // by usins arithmetic operators
    printf("a+b=%d\n", a + b);
    printf("a*b=%d\n", a * b);
    printf("a/b=%d\n", a / b);
    printf("a-b=%d\n", a - b);

    // by usins relational operators
    printf("a==b=%d\n", a == b);
    printf("a!=b=%d\n", a != b);
    printf("a<b=%d\n", a < b);
    printf("a>b=%d\n", a > b);
    printf("a<=b=%d\n", a <= b);
    printf("a>=b=%d\n", a >= b);

    // by usins logical operators
    printf("a&&b=%d\n", a && b);
    printf("a||b=%d\n", a || b);
    printf("!(a&&b)=%d\n", !(a && b));

    // by usins bitwise operators
    printf("a&b=%d\n", a & b);
    printf("a|b=%d\n", a | b);
    printf("a^b=%d\n", a ^ b);

    // by using assignmint operators
    printf("a+b=%d\n", a += 2);
    printf("a*b=%d\n", a *= 2);
    printf("a/b=%d\n", a /= 2);
    printf("a-b=%d\n", a -= 2);

    // by using miscellaneous operators

    printf("size of a=%d\n", sizeof(a));
    printf("size of b=%d\n", sizeof(b));

    return 0;
}
