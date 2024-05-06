#include <stdio.h>

int Squer(int bariableValue) { return bariableValue * bariableValue; }

int Queb(int bariableValue) {
  return bariableValue * bariableValue * bariableValue;
};

int main() {

  int Squer1 = Squer(30);

  int Queb1 = Queb(20);

  printf("The total value is:\n %d \n %d \n", Squer1, Queb1);
  return 0;
};
