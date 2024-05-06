#include <stdio.h>
int main() {

  int marks, value, addValue, minusValue, multipleValue;

  printf("Enter tow number:\n ");
  scanf("%d %d", &marks, &value);

  int *pointer1, *pointer2;
  pointer1 = &marks;
  pointer2 = &value;

  addValue = *pointer1 + *pointer2;

  minusValue = *pointer1 - *pointer2;

  multipleValue = *pointer1 * *pointer2;

  printf("\nTotal  addValue is: %d \n", addValue);
  printf("Total minusValue is: %d \n", minusValue);
  printf("Total multipleValue is: %d \n", multipleValue);

  return 0;
};
