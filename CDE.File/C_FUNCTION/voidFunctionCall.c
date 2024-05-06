#include <stdio.h>

void passingValue(int sum) { printf("The Value is:%d\n ", sum * sum); };

int main() {

  int start;
  printf("Input a Digit:");
  scanf("%d", &start);

  passingValue(start);

  return 0;
};
