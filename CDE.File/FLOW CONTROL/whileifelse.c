#include <stdio.h>
int main() {

  int testInteger, common = 10;
  printf("Enter your test integer data:");
  scanf("%d", &testInteger);

  while (common < testInteger) {

    printf("the king: %d \n", common);

    common++;
  }

  int dhakaKing, borishalKing = 30;

  printf("Enter your dhakaKing data:");
  scanf("%d", &dhakaKing);

  while (borishalKing > dhakaKing) {

    printf("winner!:%d \n", borishalKing);

    borishalKing--;
  }

  return 0;
};