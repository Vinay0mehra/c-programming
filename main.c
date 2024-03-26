// making a simple calculator
/*testing addition,subtraction, multiply,divide */
#include <stdio.h>
#include<math.h>
/*vinay mehra*/

int main() {

  char op;
  double first, second;
  //enter operator to use
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  // enter two values
  /*if you want to divide first enter the number to be divided and then enter divisor*/ 
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

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
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
