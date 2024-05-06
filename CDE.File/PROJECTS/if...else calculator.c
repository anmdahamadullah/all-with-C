#include <stdio.h>
int main() {

  char operator;
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
    totalResults = dbl1 / dbl2;

  } else {
    printf("Error!!!!");
  }
  printf("Your Count Value Is: %lf", totalResults);

  return 0;
};