

// POinter Swaping...

#include <stdio.h>
int main() {

  int mark, valu, addValue, minusValue, multipleValue, marks, value, temp;
  printf("\nPointers Number Calculate:....\n");
  printf("Enter tow numbers for calculate:\n ");
  scanf("%d %d", &mark, &valu);

  int *pointer1, *pointer2;
  pointer1 = &mark;
  pointer2 = &valu;

  addValue = *pointer1 + *pointer2;

  minusValue = *pointer1 - *pointer2;

  multipleValue = *pointer1 * *pointer2;

  printf("\nTotal  addValue is: %d \n", addValue);
  printf("Total minusValue is: %d \n", minusValue);
  printf("Total multipleValue is: %d \n", multipleValue);

  printf("\n");
  printf("Pointers Swaping:....\n");
  printf("Enter your tow for Swaping:\n");
  scanf("%d %d", &marks, &value);

  int *pointers1, *pointers2;
  printf("Before swaping: marks=%d, value=%d\n", marks, value);

  pointers1 = &marks;
  pointers2 = &value;

  temp = *pointers1;
  *pointers1 = *pointers2;
  *pointers2 = temp;

  printf("\nAfter  swaping: marks=%d, value=%d\n", marks, value);
  return 0;
};