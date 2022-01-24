#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b;
  int *p1,*p2;
  char ch;
  p1=&a;
  p2=&b;
  printf("Choose Operator\n");
  printf("+ for Adding\n");
  printf("- for Subtracting\n");
  printf("* for Multiplying\n");
  printf("/ for Dividing\n");
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
          printf("Divisor cannot be 0");
          return 0;
      }
      printf("%d / %d = %0.2f",a,b,(*p1/(float)*p2));
      break;
  default:
    printf("Error! operator is not correct");
  }
  return 0;
}