#include <stdio.h>
int main() {
  int startIntiger, forInteger = 1;
  printf("Enter integer data:");
  scanf("%d", &startIntiger);

  for (forInteger = 1; forInteger < startIntiger; forInteger++) {
    printf("hello i am naeem:%d \n", forInteger);
  };

  int closeInteger, openInteger = 20;
  printf("Entr open entiger data:");
  scanf("%d", &closeInteger);

  for (openInteger = 20; openInteger > closeInteger; openInteger--) {

    printf("my name is naeem:%d \n", openInteger);
  };

  return 0;
};
