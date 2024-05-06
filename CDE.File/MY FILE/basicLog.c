// YOU CAN SEE THE OUTPUT WHEN YOU USE>>>  -lm
// Example:>> gcc ./CDE.File/MY\ FILE/basicLog.c -o ./OTP.File/file -lm

// But here are all the dot values. What is the solution?

#include <math.h>
#include <stdio.h>
int main() {
  char operator;
  double num1, num2, result;
  printf("Choose an Operator(l, s)");
  scanf(" %s", &operator);

  printf("Enter tow numbers:");
  scanf("%lf %lf", &num1, &num2);

  switch (operator) {

  case 'l':
    result = log(num1);
    break;
  case 's':
    result = sqrt(num2);
    break;
  default:
    printf(
        "Error!!!"); //// But here are all the dot values. What is the solution?
  }
  printf("The Value is:%lf \n", result);

  return 0;
};
