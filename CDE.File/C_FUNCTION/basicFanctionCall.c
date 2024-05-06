

#include <stdio.h>

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int multyply(int a, int b) { return a * b; }

int divide(int a, int b) { return a / b; }

int main() {
  int a, b;
  printf("Enter the value a and b:\n");
  scanf("%d %d", &a, &b);

  int add_result = add(a, b);
  int subtract_result = subtract(a, b);
  int multyply_result = multyply(a, b);
  int divide_result = divide(a, b);
  printf("\nAdd:%d,\nsubtract:%d,\nmultyply:%d,\ndivide:%d \n", add_result,
         subtract_result, multyply_result, divide_result);

  return 0;
};