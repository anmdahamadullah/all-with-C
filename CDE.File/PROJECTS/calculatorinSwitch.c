#include <stdio.h>
int main() {

  char operator1, operator2, num1, num2, result1;
  double num3, num4, result2;

  printf("\nEnter choice 1st operator ['+', '-', '*']");

  printf("\nAnd Other 2nd operator '/':");

  scanf(" %s %s", &operator1, &operator2);

  printf("\nEnter tow 1st operator number:");
  scanf(" %s %s", &num1, &num2);

  printf("Enter  tow 2nd Divit number:");
  scanf("%lf %lf", &num3, &num4);

  switch (operator1, operator2) {
  case '+':
    result1 = num1 + num2;
    break;

  case '-':
    result1 = num1 - num2;
    break;
  case '*':
    result1 = num1 * num2;
    break;
  case '/':
    result2 = num3 / num4;
    break;

  default:
    printf("Error!!! Please try again\n");
  }
  printf("The 1st operators Results Is: %d \n", result1);
  printf("The divit Results Is:%lf \n", result2);
  return 0;
};
