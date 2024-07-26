// Ques : If cost price and selling price of an item is
// input through the keyboard, write a program to
// determine whether the seller has made profit or
// incurred loss.
// Also determine how much profit he
// made or loss he incurred.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cp, sp, p, l;

    printf("enter cost price\n");
    scanf("%d", &cp);

    printf("enter selling price\n");
    scanf("%d", &sp);

    if (cp < sp)
    {
        printf("profit\n");
        p = sp - cp;
        printf("your profit is %d", p);
    }
    else if (sp < cp)
    {
        printf("loss\n");
        l = cp - sp;
        printf("your loss is %d", l);
    }
    else
    {
        printf("no profit, no loss.");
    }
    return 0;
}
