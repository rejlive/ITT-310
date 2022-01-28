#include<stdio.h>
#include<stdlib.h>
// Calculator Using Pointers
union Data {
	int n;
	int m;
};
int main()
{
  int a,b;
  
  union Data data;
  
  data.n = a;
  data.m = b;
  
  char ch;
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
      printf("%d + %d = %d",a,b,(a+b));
      break;
  case '-':
      printf("%d - %d = %d",a,b,(a-b));
      break;
  case '*':
      printf("%d * %d = %d",a,b,(a*b));
      break;
  case '/':
      if(b==0)
		  /*If 0 is entered for the divisor p2 this error will display*/
      {
	  printf("Divisor cannot be 0");
          return 0;
      }
      printf("%d / %d = %0.2f",a,b,(a/(float)b));
      break;
  default:
	/*If a character other than an operator is entered this 
	error will display*/
    printf("Error! operator is not correct");
  }
  return 0;
}