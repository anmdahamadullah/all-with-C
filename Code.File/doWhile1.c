#include <stdio.h>
int main() {

  int i, naeem;
  i = -10, naeem = 100;
  do {
    printf("hello: %d \n", i);
    i = i + 3;
  } while (i <= 30);

  do {
    printf("Naeem Ibn Andur Razzak:%d\n", naeem);
    naeem = naeem - 2;
  } while (naeem >= 10);

  return 0;
}