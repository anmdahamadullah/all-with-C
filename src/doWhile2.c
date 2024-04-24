#include <stdio.h>
int main() {

  int i;
  i = 20;
  do {
    printf("hello: %d \n", i);
    i = i - 3;
  } while (i >= 10);

  return 0;
}