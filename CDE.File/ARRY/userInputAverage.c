
#include <stdio.h>
int main() {

  int startArry[100], i = 0, sum = 0, user;

  printf("How many Numbers:");
  scanf("%d", &user);

  printf("Please Type your Numbers:"); // Scan....
  for (i = 0; i < user; i++) {

    scanf("%d", &startArry[i]);
  }
  for (i = 0; i < user; i++) { // print...

    sum = sum + startArry[i];
  }
  printf("\nThe Add number is:%d\n", sum);
  printf("The Average Number Is:%.2f \n", (float)sum / user);
  return 0;
};
