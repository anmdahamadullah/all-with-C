// if...else --> input/output.

#include <stdio.h>
int main() {
  int rajiyaMarks;
  printf("Enter marks");
  scanf("%d", &rajiyaMarks);
  if (rajiyaMarks == 80) {
    printf("you: correct:%d \n", rajiyaMarks);
  } else {

    printf("you not correct: \n");
  }

  return 0;
};