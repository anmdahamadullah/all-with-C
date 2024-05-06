#include <stdio.h>
int main() {

  int startArry[50], i = 0, sum = 0, user;
  printf("How many numbers:?");
  scanf("%d", &user);
  printf("Please Type your Numbers:"); // We can do Scan....Easy way.
  for (i = 0; i < user; i++) {

    scanf("%d", &startArry[i]);
  }
  for (i = 0; i < user; i++) { //  We can do print...Easy way.

    sum = sum + startArry[i];
  }
  printf("\n%d\n\n\n", sum);

  return 0;
};
