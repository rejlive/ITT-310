#include <stdio.h>
int main() {
	// Character assigned to an operator 
  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  // This function wants two inputs for the operands 
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);
	/* The output will depend on the operator chosen along with the operands.
	This section contains functions that will ask for the operator that will
	be input. It also compares the operands and the operator against each other */
  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator does not match any case constant 
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}