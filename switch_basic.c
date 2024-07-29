#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    char ch;

  
    printf("enter 1st and 2nd number\n");
    scanf("%d %d", &a, &b);

   printf("enter Operator\n");
    scanf(" %c", &ch);

  switch (ch)
  {
  case '+' :
    printf("%d",a+b);
    break;
     case '-':
    printf("%d",a-b);
    break;
   case '*':
    printf("%d",a*b);
    break;
     case '/':
    printf("%d",a/b);
    break;
    default:
    printf(" Operators is invalid");
  
  }

    return 0;
}
