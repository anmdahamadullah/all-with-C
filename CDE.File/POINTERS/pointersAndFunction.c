#include <stdio.h>

void totalValue(int *recive1, int *recive2) {
  int temp;
  temp = *recive1;
  *recive1 = *recive2;
  *recive2 = temp;
}

int main() {

  int start, open;

  printf("Enter your tow value:\n");
  scanf("%d %d", &start, &open);
  printf("\nBefor swaping   :start =%d,open=%d \n", start, open);

  // int *recive1, *recive2, temp;

  // recive1 = &start;                  ????????
  // recive2 = &open;

  totalValue(&start, &open);

  printf("\nAfter swaping  :start =%d,open=%d \n", start, open);

  return 0;
};