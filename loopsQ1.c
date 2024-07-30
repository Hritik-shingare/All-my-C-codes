// Ques : Print hello world ‘n’ times. Take ‘n’ as
// input from user

#include<stdio.h>
int main(int argc, char const *argv[])
{   int n;

    printf("Enter a number how many times do you want to print hello world \n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)        

    {
        printf("hello world \n");
    }
    
    return 0;
}
