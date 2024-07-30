// Ques : Display this AP - 1,3,5,7,9.. upto ‘n
// terms.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n ;
    printf("enter Nth teems\n");
    scanf("%d",&n);

    for (int i = 1; i <= 2*n-1; i+2)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
