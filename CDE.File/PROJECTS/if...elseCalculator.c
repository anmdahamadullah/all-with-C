
// YOU CAN SEE THE OUTPUT WHEN YOU USE>>>  -lm
// example: gcc ./CDE.File/PROJECTS/if...else\ calculator.c -o ./OTP.File/if -lm

// But here are all the dot values. What is the solution?

#include <math.h>
#include <stdio.h>

int main() {

  char operator;
  printf("\nYou can use them  (+,  -,  *, /, log(l), square(s)\n");
  printf("Choose an Operator:");
  scanf("%s", &operator);
  double dbl1, dbl2;
  double totalResults;
  printf("Enter tow Numbers:");
  scanf("%lf %lf", &dbl1, &dbl2);
  if (operator== '+') {
    totalResults = dbl1 + dbl2;

  } else if (operator== '-') {
    totalResults = dbl1 - dbl2;

  } else if (operator== '*') {

    totalResults = dbl1 * dbl2;

  } else if (operator== '/') {

  } else if (operator== 'l') {
    totalResults = log(dbl1);

  } else if (operator== 's') {
    totalResults = sqrt(dbl2);
    // But here are all the dot values. What is the solution?
  } else {
    printf("Error!!!!");
  }
  printf("Your Count Value Is: %lf", totalResults);

  return 0;
};