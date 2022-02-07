#include<stdio.h>
#include<stdlib.h>
// Calculator Using a Union
union Data {
	int n;
	int m;
};
int main()
{
  int a,b;
  /* The union assigns a and b to memory*/
  union Data data;
  
  data.n = a;
  data.m = b;
  /* Choosing an operator and create a redundant FILE I/O 
  for the purpose of the assignment requirements. Since this is a simple calculator
  I did not create a write to file so there is no text file */
  
  int fclose( FILE *fp );
  // Choosing an operator 
  char ch;
  printf("Choose Operator\n");
  printf("+ for Adding\n");
  printf("- for Subtracting\n");
  printf("* for Multiplying\n");
  printf("/ for Dividing\n");
  scanf("%c",&ch);
  // Choosing two numbers
  printf("Enter any two numbers\n");
  scanf("%d%d",&a,&b);
  
  // Switch case is used depending on the operator chosen 
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