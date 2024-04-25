#include <stdio.h>

int main() {
  int testInt;
  printf("Enter a intiger data: ");
  scanf("%d", &testInt);

  if (testInt == 80) {

    printf(" you got (A+) and total marks:%d \n", testInt);

  } else if (testInt == 70) {

    printf("you got (A-) and total marks:%d \n", testInt);
  } else if (testInt == 60) {

    printf("you got (B+) and total marks:%d \n", testInt);

  } else if (testInt == 50) {

    printf("you got (B-) and total marks:%d \n", testInt);

  } else if (testInt == 40) {

    printf("you got (C) and total marks:%d \n", testInt);

  } else if (testInt == 30) {

    printf("you failed \n");

  } else {

    printf("you didn't attend  the exam \n");
  };

  return 0;
};