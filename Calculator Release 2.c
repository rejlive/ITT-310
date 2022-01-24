#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b;
  int *p1,*p2;
  char ch;
  p1=&a;
  p2=&b;
  printf("Select the Operation\n");
  printf("Type + for Addition\n");
  printf("Type - for Subtraction\n");
  printf("Type * for Multiplication\n");
  printf("Type / for Division\n");
  scanf("%c",&ch);
  printf("Enter any two numbers\n");
  scanf("%d%d",&a,&b);
  switch(ch)
  {
  case '+':
      printf("%d + %d = %d",a,b,(*p1+*p2));
      break;
  case '-':
      printf("%d - %d = %d",a,b,(*p1-*p2));
      break;
  case '*':
      printf("%d * %d = %d",a,b,(*p1**p2));
      break;
  case '/':
      if(*p2==0)
      {
          printf("Sorry, You can not divide a number by 0");
          return 0;
      }
      printf("%d / %d = %0.2f",a,b,(*p1/(float)*p2));
      break;
  default:
    printf("Sorry, Invalid Choice");
  }
  return 0;
}