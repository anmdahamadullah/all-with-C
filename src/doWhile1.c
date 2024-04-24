#include <stdio.h>
int main() {

  int i;
  i = -10;
  do {
    printf("hello: %d \n", i);
    i = i + 3;
  } while (i <= 30);

  return 0;
}