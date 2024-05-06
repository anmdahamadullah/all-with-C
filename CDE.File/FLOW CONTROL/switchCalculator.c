

#include <stdio.h>

/* We r tolking about Scope.
1. Global Scope: Global Scope is a scope which is abailable to all of others
componant.(all copmponants)
2. Local Scope: Local scop not abailable to others componant but only
 componat can use for  its own perpuse.( only own)*/

int main() {
jump:
  char operators;
  printf("Choose an operator ['+','-','*','/']:");
  scanf("%s", &operators);

  double num1, num2, result;

  printf("Enter two numbers:");
  scanf("%lf %lf", &num1, &num2);

  switch (operators) {

  case '+':

    // memory swap (=) / replasement.

    result = num1 + num2;
    if (result == num1 + num2) { // We can use if..else Statemant...
      printf("You right \n");
    }

    break;

  case '-':
    result = num1 - num2;

    if (result == num1 - num2) {
      printf("You right \n");
    }
    break;

  case '*':
    result = num1 * num2;

    if (result == num1 * num2) {
      printf("You right \n");
    }
    break;
  case '/':
    result = num1 / num2;

    if (result == num1 / num2) {
      printf("You right \n");
    }
    break;

  default:
    printf(" Error!!!! You not Correct Try again: \n");
    goto jump;
  }
  printf("The results is:%lf \n", result);

  return 0;
};
