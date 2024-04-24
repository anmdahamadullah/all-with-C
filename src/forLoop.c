
#include <stdio.h>
int main() {
  int startInt;
  printf("Enter an integer:");
  scanf("%d", &startInt);

  int stupidInteger;
  for (stupidInteger = 10; stupidInteger < startInt; stupidInteger++) {

    printf("total integer:%d \n", stupidInteger);
  }

  return 0;
}