#include <stdio.h>
int main() {
  int madInteger, stor = 10;
  printf("Enter data:");
  scanf("%d", &madInteger);

  while (stor < madInteger) {

    printf("i am naeem:%d \n", stor);

    stor++;
  }

  { printf("your data is not correct: \n"); }

  return 0;
};