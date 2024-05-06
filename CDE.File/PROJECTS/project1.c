
// YOU CAN SEE THE OUTPUT WHEN YOU USE>>>  -lm
// Example:>> gcc ./CDE.File/PROJECTS/projectInsaeem.c -o ./OTP.File/if2 -lm

// But here are all the dot values. What is the solution?

#include <math.h>
#include <stdio.h>
int main() {

  char operator;
  float num1, num2, totalResults;

  printf("Enter Choose an Operator['+','-','*','/','l','s']:");
  scanf("%c", &operator);
  printf("\nEnter Tow numbers:");
  scanf("%f %f", &num1, &num2);

  switch (operator) {

  case '+':
    totalResults = num1 + num2;
    break;
  case '-':
    totalResults = num1 - num2;
    break;
  case '*':
    totalResults = num1 * num2;
    break;
  case '/':
    totalResults = num1 / num2;
    break;
  case 'l':
    totalResults = log(num1);
    break;
  case 's':
    totalResults =
        sqrt(num2); // But here are all the dot values. What is the solution?
    break;
  default:
    printf("Error!!! Please Try Again..\n");
  }

  printf("\n\nThe Value Is: %f \n", totalResults);

  return 0;
}