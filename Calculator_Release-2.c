#include<stdio.h>
#include<stdlib.h>
// Calculator Using Pointers
int main()
{
	/*int variables a and b addresses 
	will be stored by pointers p1 and p2*/
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
  /*Pointers p1 and p2 are used in the functions here to perform the math operation*/
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
		  /*If 0 is entered for the divisor p2 this error will display*/
      {);
          printf("Divisor cannot be 0"
          return 0;
      }
      printf("%d / %d = %0.2f",a,b,(*p1/(float)*p2));
      break;
  default:
	/*If a character other than an operator is entered this 
	error will display*/
    printf("Error! operator is not correct");
  }
  return 0;
}